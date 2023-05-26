#include <stdio.h>
#include <conio.h>
int table_quan,table_num, table_len;
void multitable(int matrix[table_quan],int table_num, int table_len);
int main()
{ 
printf("\nEnter the Amount of tables you want : ");
scanf("%d",&table_quan);

printf("\nEnter how long you want the table to be printed : ");
scanf("%d",&table_len);
int matrix[table_quan][table_len];
int i;
for(i=0;i<table_quan;i++)
{
    printf("\nEnter the number you want the table of : ");
    scanf("%d",&table_num);
    
    multitable(matrix[table_quan],table_num,table_len);
}
    // multitable(matrix[table_quan],table_num,table_quan);
    // multitable(matrix[table_quan],table_num,table_quan);

    return 0;
}

void multitable(int matrix[table_quan],int table_num, int table_len){
    printf("The multiplication table of %d : \n",table_num);int i;
    for(i=0;i<table_len;i++){
    matrix[i]= table_num*(i+1);
    }
    for(i=0;i<table_len;i++){
        printf("%d X %d = %d\n",table_num,i+1,matrix[i]);
    }
    printf("\n==========================================\n\n");
}