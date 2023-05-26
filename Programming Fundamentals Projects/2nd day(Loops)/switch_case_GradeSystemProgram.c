#include <stdio.h>
#include <conio.h>
int main()
{
    int marks, grade;
    printf("Enter your marks : ");
    scanf("%d", &marks);

    switch (marks/10)
    {case 10:
    case 9:
        printf("your grade is A\n");
        break;

    case 8:
        printf("your grade is B\n");
        break;

    case 7:
        printf("your grade is C\n");
        break;

    case 6:
        printf("your grade is D\n");
        break;

    default:
        printf("error 404 not found\n");
        break;
    }

    return 0;
}