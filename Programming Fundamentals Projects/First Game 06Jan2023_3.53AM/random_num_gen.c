#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main()
{srand(time(0));
int number= rand()%100+2;
printf("%d",number);
    

    return 0;
}