#include <stdio.h>
#include <conio.h>
int main()
{
    int table=10,i;
    for(i=10;i;i--) // non zero value considered true
        {printf("\n%d * %d = %d ",table,i,table*i);}

    return 0;
}