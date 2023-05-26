#include <stdio.h>
#include <conio.h>
int main()
{int sum_matrix[3][3]; //first[]=no_of_rows //second[]=no_of_columns
int matrix[3][3]={{1,2,3}, //both inizialazing matrix are valid.
                    {4,5,6},    //{1,2,3} is a row 
                    {7,8,9}};   //{1} and {4} and {7} are columns. 3x3 structure
int matrix2[3][3]={{10,20,30},{40,50,60},{70,80,90}};
//both inizialazing matrix are valid.
int i;
    for(i=0;i<3;i++) //for rows
    {  int j;
        for(j=0;j<3;j++) //for columns
        {sum_matrix[i][j]= matrix[i][j] + matrix2[i][j]; //addition
        printf("%d ",sum_matrix[i][j]);//displaying
        }

    printf("\n"); //new line after every row change
    }
}
