#include <stdio.h>
#include <conio.h>
float c2f(float a);
int main()
{float celsius,fahrenheit;
printf("\nEnter the Celsius value : ");
scanf("%f",&celsius);
fahrenheit = c2f(celsius);
printf("\nValue in Fahrenheit will be %.2f",fahrenheit);
    return 0;
}

float c2f(float a)
{float result; result= (a*9/5)+32;
return result;
}