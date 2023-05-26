#include <stdio.h>
#include <conio.h>
int main()
{
    int sum=0,num=1,n=10;
    do
    {
      sum+=num;
      num++; 
    } 
    while (num<=n);
printf("%d",sum);
    
    return 0;
}
