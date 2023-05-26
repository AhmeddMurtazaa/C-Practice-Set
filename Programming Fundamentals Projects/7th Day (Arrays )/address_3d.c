#include <stdio.h>
#include <conio.h>
int main()
{int array[2][3][4];

int *ptr=array;
for(int i=0;i<2;i++)
{   for(int j=0;j<3;j++)
    {   for (int k=0;k<4;k++)
        {   printf("\n The address of arr [%d][%d][%d] is : %u ",i+1,j+1,k+1,ptr);
        ptr++;  //printf("\n The address of arr [%d][%d][%d] is : %u ",i+1,j+1,k+1,&arr[i][j][k]);
        }
    printf("\n");
    }
printf("\n");
}
return 0;
}