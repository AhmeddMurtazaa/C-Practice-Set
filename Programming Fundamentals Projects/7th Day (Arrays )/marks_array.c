#include <stdio.h>
#include <conio.h>
int main()
{int marks[10];
for(int i=0;i<10;i++){
    printf("Enter the marks for student no.%d : ",i+1);
    scanf("%d",&marks[i]);
}
for(int i=0;i<10;i++){
    printf("\nthe marks for student no.%d is %d ",i+1,marks[i]);
}

    return 0;
}