#include <stdio.h>
#include <conio.h>
int main()
{
int count_pos=0,count_neg=0, array[10]={-10,-9,-7,7,6,5,4,3,2,1};
    for(int i=0;i<10;i++)
    {
        if(array[i]>0)
        {count_pos++;}
        else{count_neg++;
        }
    }
    printf("your variable has %d positive integers and %d negative integers",count_pos, count_neg);

    return 0;
}