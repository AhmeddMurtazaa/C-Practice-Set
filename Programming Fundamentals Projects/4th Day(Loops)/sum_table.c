#include <stdio.h>
#include <conio.h>
int main()
{
   int num,sum=0,i;
    printf("\nenter the number :\n");
    scanf("%d",&num);

    for(i=1;i<=10;i++)
        {sum+= num*i;}
printf("\n sum of the number of that table will be %d",sum);
    return 0;
}