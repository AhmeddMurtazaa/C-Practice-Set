#include <stdio.h>
#include <conio.h>
int main()
{
    char string[]={'A','h','m','e','d','\0'}; //both lines do the same, below is convinient.
    char string2[]= "Ahmed"; //C language adds the \0 automatically when we use ""
    printf("%c",string[0]); //this method will only print the first char.
    printf("\n%s",string);
    return 0;
}