#include <stdio.h>
#include <conio.h>
#include<string.h>
int main()
{
    char name[]="Ahmmd";
    char name2[]="Ahmad";
    int value = strcmp(name,name2);
    printf("%d",value);
    return 0;
}
