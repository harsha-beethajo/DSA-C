#include <iostream>
#include <vector>
#include <cmath>
#include <chrono>
#include <thread>

int main() {
    float A = 0, B = 0;
    float i, j;
    int k;
    
    // Buffer dimensions
    const int screen_width = 800;
    const int screen_height = 80;
    
    // Arrays for the text canvas and z-buffer depth tracking
    std::vector<char> b(1760, ' ');
    std::vector<float> z(1760, 0);

    // Clear the screen using ANSI escape sequences
    std::cout << "\x1b[2J";

    while (true) {
        // Reset buffers for the next frame
        std::fill(b.begin(), b.end(), ' ');
        std::fill(z.begin(), z.end(), 0.0f);

        // theta loop (j) and phi loop (i) to map the torus points
        for (j = 0; j < 6.28; j += 0.07) {
            for (i = 0; i < 6.28; i += 0.02) {
                float sin_i = std::sin(i);
                float cos_j = std::cos(j);
                float sin_A = std::sin(A);
                float sin_j = std::sin(j);
                float cos_A = std::cos(A);
                float h = cos_j + 2;
                
                // D is 1/z, used for perspective projection
                float D = 1 / (sin_i * h * sin_A + sin_j * cos_A + 5);
                
                float cos_i = std::cos(i);
                float cos_B = std::cos(B);
                float sin_B = std::sin(B);
                float t = sin_i * h * cos_A - sin_j * sin_A;

                // 2D projection calculation
                int x = static_cast<int>(40 + 30 * D * (cos_i * h * cos_B - t * sin_B));
                int y = static_cast<int>(12 + 15 * D * (cos_i * h * sin_B + t * cos_B));
                int o = x + 80 * y;

                // Calculate luminance index (0-11 mapping to 12 ASCII characters)
                int N = static_cast<int>(8 * ((sin_j * sin_A - sin_i * cos_j * cos_A) * cos_B 
                                         - sin_i * cos_j * sin_A - sin_j * cos_A 
                                         - cos_i * cos_j * sin_B));

                // If coordinates are inside screen bounds and closest to camera
                if (22 > y && y > 0 && x > 0 && 80 > x && D > z[o]) {
                    z[o] = D;
                    // Select a character from the luminosity string based on light intensity
                    b[o] = ".,-~:;=!*#$@"[N > 0 ? N : 0];
                }
            }
        }

        // Return cursor to home position instead of re-clearing screen to reduce flicker
        std::cout << "\x1b[H";
        
        // Print the frame to the console
        for (k = 0; k < 1761; ++k) {
            std::cout << (k % 80 ? b[k] : '\n');
        }

        // Increment rotation angles for the next frame
        A += 0.04f;
        B += 0.02f;

        // Sleep to throttle the frame rate (~30 FPS)
        std::this_thread::sleep_for(std::chrono::milliseconds(20));
        system("clear");
    }

    return 0;
}