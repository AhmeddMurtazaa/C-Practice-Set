#include <stdio.h>
#include <conio.h>
#include<string.h>
int main()
{int count=0;
    char name[]={'A','H','M','E','D','\0'};

    count =strlen(name);
    printf("string is %d long",count);
    return 0;
}