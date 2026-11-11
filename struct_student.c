#include <stdio.h>
typedef struct 
{
    char branch[5];
}branch;

typedef struct 
{
    char roll_number[20];
    char Section;
    branch class;
}student;
student student_details()
{
     student details;
     printf("Enter your roll number: ");
     scanf("%s",details.roll_number);
     printf("Enter your Branch: ");
     scanf("%s",details.class.branch);
     printf("Enter your Section: ");
     scanf(" %c",&details.Section);
     return details;
}
int main()
{
    student kid[3];
    for (int i = 0; i < 3; i++)
    {
        printf("=== Student %d ===\n",i+1);
       kid[i] = student_details();
    }
    return 0;
}