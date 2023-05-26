#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    printf("enter the number ");
    scanf("%d",&a);

    while(a)
    {printf("%d\n",a);
    a--;
    }

    return 0;
}