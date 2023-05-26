#include <stdio.h>
#include <conio.h>
int count(int array[],int n);
int count_pos=0;
int main()
{
int array[10]={-10,-9,-7,7,6,5,4,3,2,1};
count (array,10);
    printf("your variable has %d positive integers",count_pos);

    return 0;
}
int count(int array[],int n){
   for(int i=0;i<n;i++)
    {
        if(array[i]>0)
        {count_pos++;}
        }
}