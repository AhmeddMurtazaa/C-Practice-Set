#include <stdio.h>
#include <conio.h>
int main()
{
    int num=5, i=0;
    while(num<10)
        {   if (i!=num)
            {continue;
            i++;}
            else
            {printf("%d",i);
            i++;}

        }
    return 0;
}