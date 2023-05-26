#include <stdio.h>
#include <conio.h>
void starss(int n );
int main()
{int num;
printf("enter the number");
scanf("%d",&num);
starss(num);
}

void starss (int n){
    if(n==1)
    {printf("*\n");
    return ;
    }
    
    starss (n-1);
    for(int i=0;i<(2*n-1);i++)
    {printf("*");}
    printf("\n");
    return;
}