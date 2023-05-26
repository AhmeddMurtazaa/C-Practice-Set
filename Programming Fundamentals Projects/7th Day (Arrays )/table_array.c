#include <stdio.h>
#include <conio.h>
int main()
{
    int table[10],num;
    printf("\nEnter the number you want the table of : ");
    scanf("%d",&num);
    printf("The Table for %d \n",num);
    for(int i=0;i<10;i++){
        table[i]=num*(i+1);
    }
    for(int i=0;i<10;i++){
        printf("\n%d X %d = %d ",num,i+1,table[i]);
    }

    return 0;
}