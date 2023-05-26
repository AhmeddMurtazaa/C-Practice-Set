#include <stdio.h>
#include <conio.h>
int main()
{float celsius, fahrenheit;

printf("put the value of celsius : ");
scanf("%f",&celsius);
    fahrenheit = (celsius*9/5)+32;
    printf("the fahrenheit equivalent of that value would be %f",fahrenheit);
    return 0;
}