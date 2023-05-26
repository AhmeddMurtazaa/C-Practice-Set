#include <stdio.h>
#include <conio.h>
void morning();         //Function Prototype
void afternoon();       //Function Prototype
void night();           //Function Prototype
int main()
{
    morning();          //Function Call
                //Function Call
               //Function Call
    return 0;
}

void morning()          //Function Definition
{
    printf("Good Morning\n");
    afternoon();
}
void afternoon()            //Function Definition
{
    printf("Good afteroon\n");
    night(); 
}
void night()            //Function Definition
{
    printf("Good Night\n");
}