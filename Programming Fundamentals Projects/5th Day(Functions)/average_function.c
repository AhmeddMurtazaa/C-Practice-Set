#include <stdio.h>
#include <conio.h>
float average(float a,float b, float c); //prototype
int main()
{ float num1,num2,num3,result;
    printf("\nenter the first number : ");
    scanf("%f",&num1);
    printf("\nenter the second number : ");
    scanf("%f",&num2);
    printf("\nenter the third number : ");
    scanf("%f",&num3);
    
    result = average(num1,num2,num3); //call
    printf("the average of numbers will be %f",result);
    return 0;
}
float average(float a,float b,float c)
{float ave;
ave=(a + b + c) /3.0;
    return ave;
}
