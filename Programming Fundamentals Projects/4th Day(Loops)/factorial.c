#include <stdio.h>
#include <conio.h>
int main()
{
    int factorial=1,i=1,n=4;
    // while(i<=n)                  // while loop
    // {factorial=factorial* i;
    // i++;}
    
    for(i=1;i<=n;i++)               //for loop
    {factorial=factorial* i;
    }
printf("factorial of number %d will  be %d",n,factorial);
    return 0;
}