#include <stdio.h>
#include <conio.h>
void morning();         //Function Prototype
void afternoon();       //Function Prototype
void night();           //Function Prototype
int main()
{
    morning();          //Function Call
    afternoon();            //Function Call
    night();            //Function Call
    return 0;
}

void morning()          //Function Definition
{
    printf("Good Morning Ahmed\n");
}
void afternoon()            //Function Definition
{
    printf("Good Afteroon Ahmed\n");
}
void night()            //Function Definition
{
    printf("Good Night Ahmed \n");
}