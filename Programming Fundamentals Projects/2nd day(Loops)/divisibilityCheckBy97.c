#include <stdio.h>
#include <conio.h>
int main()
{
    int num;
    printf("enter the number :");
    scanf("%d",&num);

    printf("the result is : %d\n", num%97);
    printf("if the result is 0 then the number you input is divisible by 97");
    return 0;
}