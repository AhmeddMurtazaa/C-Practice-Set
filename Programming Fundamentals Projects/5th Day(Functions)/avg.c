#include <stdio.h>
#include <conio.h>
float average(float a, float b, float c);
int main()
{float num1,num2,num3,avg_res;
printf("\nEnter the first value : ");
scanf("%f",&num1);
printf("\nEnter the second value : ");
scanf("%f",&num2);    
printf("\nEnter the third value : ");
scanf("%f",&num3);
avg_res= average(num1,num2,num3);
printf("\nThe average of these numbers will be %f",avg_res);
    return 0;
}

float average(float a, float b, float c)
{float result; result=(a+b+c)/3.0;
return result;
}