#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,vipPass=1;
    printf("Enter your age : ");
    scanf("%d",&a);

    if((a>=18 && a<90) || !(vipPass=1) )
    {printf("you can drive legally and can get a license");}
    else
    {printf("you can't get a driver's license. you cannot drive");}

    return 0;
}