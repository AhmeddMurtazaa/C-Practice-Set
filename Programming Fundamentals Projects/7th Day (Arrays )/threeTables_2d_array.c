#include <stdio.h>
#include <conio.h>

void multitable(int matrix[3],int t_num,int n){
    printf("The multiplication table of %d : \n",t_num);
    for(int i=0;i<n;i++){
    matrix[i]= t_num*(i+1);
    }
    for(int i=0;i<n;i++){
        printf("%d X %d = %d\n",t_num,i+1,matrix[i]);
    }
    printf("\n==========================================\n\n");
}
int main()
{   int matrix[3][10];
    multitable(matrix[0],2,10);
    multitable(matrix[1],7,10);
    multitable(matrix[2],9,10);

    return 0;
}