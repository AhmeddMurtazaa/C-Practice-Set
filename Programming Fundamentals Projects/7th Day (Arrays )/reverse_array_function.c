#include <stdio.h>
#include <conio.h>
void replace(int *array,int n);
int temp;
int main()
{ int array[10]={10,20,30,40,50,60,70,80,90,100};
    replace(array,10); //indirectly making value of n in function ="10"
    for(int i=0;i<10;i++){
        printf("now on %d position is %d\n",i+1,array[i]);
    }
    return 0;
}
void replace(int *array,int n){ //taking address(*) of array so it remains changed.
    for(int i=0;i<(n/2);i++)
    {temp=array[i]; //temp variable gets value of array [0] then array[1] and so on i.e //temp=10
    array[i]=array[n-i-1]; // array [0] is then replaced with array[10-0-1] then array[10-1-1] so on //i.e array[0]=100
    array[n-i-1]=temp; // array [10-0-1] is assigned the value of temp which is technically array[0] //i.e array[9]=10
    }               
                        //above comments are for first iteration.
}
