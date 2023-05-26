#include <stdio.h>
#include <conio.h>
int main()
{
    int sum=0,num=1,n=10;
    while(num<=n)
    {sum+=num;
    num++;
    }
    printf("%d",sum);
    return 0;
}