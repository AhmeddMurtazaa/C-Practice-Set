#include <stdio.h>
#include <conio.h>
int main()
{
    char a;
    printf("enter the character : \n");
    scanf("%c",&a);
    
    if(a>=65 && a<=90)
        {a+=32 ;
        printf("\n you entered a capital letter which is now : %c",a);
        }
    else if(a>=97 && a<=122)
        {a-=32;
        printf(": you enter a small letter which is now :  %c",a);
        }
    return 0;
}
