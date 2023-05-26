#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    printf("enter value : \n");
    scanf("%d",&a);

    (a<5)? printf("value is less than 5") : printf("value is greater than or equal to 5");

    return 0;
}