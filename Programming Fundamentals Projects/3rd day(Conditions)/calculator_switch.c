#include <stdio.h>
#include <conio.h>
int main()
{   float num1, num2;
    char op;
    printf("\nenter the num1,operator and num2 : ");
    scanf("%f %c %f",&num1,&op,&num2);

    switch (op)
    {
    case '+':
        {printf("addition = %.2f",num1+num2);
        break;}
    case '-':
        {printf("substraction = %.2f",num1-num2);
        break;}
    case '*':
        {printf("multiplication = %.2f",num1*num2);
        break;}
    case '/':
        {printf("division = %.2f",num1/num2);
        break;}
    default:
        {printf("invalid operator");}
    }
}