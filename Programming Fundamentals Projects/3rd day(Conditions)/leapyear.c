#include <stdio.h>
#include <conio.h>
int main()
{
    int year;
    printf("\nenter the year : ");
    scanf("%d",&year);

    if (year%4==0 || year%400==0 )
    {printf("it is a leap year ");}
    else
    {printf("its not a leap year");}

    return 0;
}