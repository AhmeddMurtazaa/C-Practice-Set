#include <stdio.h>
#include <conio.h>
float average(int a, int b, int c);
int main()
{int num1,num2,num3; float result;
printf("\nenter the value of number 1 : ");
scanf("%d",&num1);
printf("\nenter the value of number 2 : ");
scanf("%d",&num2);
printf("\nenter the value of number 3 : ");
scanf("%d",&num3);
result=average(num1,num2,num3);
printf("\n the average will be %f ",result);
    return 0;
}

float average(int a, int b, int c)
{float sum; sum=(float)(a+b+c)/3;
    return sum;
}