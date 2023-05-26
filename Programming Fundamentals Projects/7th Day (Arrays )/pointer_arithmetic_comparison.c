#include <stdio.h>
#include <conio.h>
int main()
{
    int array[10]={0,1,2,3,4,5,6,7,8,9};
    //int *ptr=array;
    int *ptr=&array[0];
    ptr=ptr+3;
    if(ptr==&array[3]){
        printf("\nthese point to the same element");
    }
    else{
        printf("\nthese dont point to the same element");
    }
    return 0;
}