#include <stdio.h>
#include <conio.h>
int main()
{int n_rows=2,n_cols=3;
    int matrix[2][3];
                                    //for user input of matrix values
    for(int i=0;i<n_rows;i++)
    {
    for(int j =0;j<n_cols;j++)
    {
    printf("\nEnter the value for row %d column %d : ",i+1,j+1);
    scanf("%d",&matrix[i][j]);
    }
    }
                                    //displaying matrix values
    for(int i=0;i<n_rows;i++)
    {for (int j=0;j<n_cols;j++)
        {printf(" %d ",matrix[i][j]);
        }
    printf("\n");
    }
}