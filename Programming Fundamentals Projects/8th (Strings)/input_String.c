#include <stdio.h>
#include <conio.h>
int main()
{
    char name[34];
    printf(" Enter you name : ");
    scanf("%s",&name);
    printf(" Your name is %s",name);
    // printf(" Your name is %c",name[4]); //this indicates that a=name[0]
                                            //& b=name[1].

    return 0;
}