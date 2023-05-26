#include <stdio.h>
#include <conio.h>
int display(int m[][],int *ptr);
int main()
{int no_of_columns=4,no_of_rows=2;
    int matrix[2][4];
for(int i=0;i<no_of_rows;i++)
    {
    for(int j=0;j<no_of_columns;j++)
        {printf("Enter the value for row %d column %d : ",i+1,j+1);
        scanf("%d",&matrix[i][j]);
        }
    }  
int *ptr=matrix[0][0];
display(matrix,*ptr);
    return 0;
}

int display(int m[][],*ptr)
{   for(int i=0;i<2;i++)
    {for(int j=0;j<4;j++)
        {printf("%d ",m[i][j]    }
    }   
printf("/n");
}