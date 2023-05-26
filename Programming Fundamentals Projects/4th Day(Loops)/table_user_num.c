#include <stdio.h>
#include <conio.h>
int main()
{
    int table,i;
    printf("enter the number you want the table of to be printed :");
    scanf("%d",&table);

    for(i=1;i<=10;i++)
        {printf("\n%d * %d = %d",table,i,table*i);
        }

    return 0;
}