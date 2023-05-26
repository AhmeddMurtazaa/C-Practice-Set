#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main()
{int guess,guesses=1;
    srand(time(0));
int number= rand()%100+2;
//printf("the random number is %d",number);

    do{ printf("\nguess the number : ");
        scanf("%d",&guess);
        if(guess>number)
        {printf("Lower number please!");}
        else if(number>guess)
        {printf("\nHigher number please!");}
        else
        {printf("\nyou guessed it in %d attempts",guesses);}
    guesses++;
    }
    while(guess!=number);

    return 0;
}
