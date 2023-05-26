#include <stdio.h>
#include <conio.h>
int main()
{
    int num1,num2,num3,num4;

    printf("\nenter number 1 : ");
    scanf("%d",&num1);
    printf("\nenter number 2 : ");
    scanf("%d",&num2);
    printf("\nenter number 3 : ");
    scanf("%d",&num3);
    printf("\nenter number 4 : ");
    scanf("%d",&num4);

    if (num1>num2 && num1>num3 && num1 >num4)
        { printf("num which is %d is greatest ",num1);
        }
    else if (num2>num3 && num2 >num4)
        { printf("num which is %d is greatest ",num2);
        }
    else if (num3>num4)
        { printf("num which is %d is greatest ",num3);
        }
    else 
        { printf("num which is %d is greatest ",num4);
        }
    return 0;
}