#include <stdio.h>
#include <conio.h>
int columns=4,rows=2;
int display(int m[rows][columns]);
int main()
{
    int matrix[2][4];
for(int i=0;i<rows;i++)
    {
    for(int j=0;j<columns;j++)
        {printf("Enter the value for row %d column %d : ",i+1,j+1);
        scanf("%d",&matrix[i][j]);
        }
    }   
display(matrix);
    return 0;
}

int display(int matrix[rows][columns])
{for(int i=0;i<rows;i++)
{for(int j=0;j<columns;j++)
{printf(" %d ",matrix[i][j]);}
printf("\n");
}

}