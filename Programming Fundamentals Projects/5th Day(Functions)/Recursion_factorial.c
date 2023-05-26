#include <stdio.h>
#include <conio.h>
int factorial (x);
int main()
{
    int a=5;
    printf("\nthe factorial of %d is %d \n",a,factorial(a));

    return 0;
}

int factorial(x)
{ printf("\n x value is %d",x);
    if(x==0||x==1)
    {return 1;}
    else
    {return x*factorial(x-1);}
}