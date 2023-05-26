#include <stdio.h>
#include <conio.h>
int main()
{ // 97 - 122 ascii code for lowercase letters
    char ch;
    printf("enter your letter \n");
    scanf("%c",&ch);

    if (ch>=97 && ch<=122)
    {    printf("it is lowercase");
    }
    else
        {printf("it is not lowercase");
        }
    return 0;
}