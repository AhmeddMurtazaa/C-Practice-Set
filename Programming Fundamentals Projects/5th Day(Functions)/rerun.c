#include <stdio.h>
#include <conio.h>
int main()
{char rerun;
    do
    {printf("\ndo you want to calculate again\? ");
    rerun = getche();
    if((rerun=='n') || (rerun=='N'))
    {
        printf("\nThank you for using Ahmed\'s program"); }
    }
    while(rerun=='y'|| rerun=='Y');
}