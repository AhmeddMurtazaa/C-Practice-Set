#include <stdio.h>
#include <conio.h>
int natural(int n);
int main()
{ int num;
printf("enter the number");
scanf("%d",&num);
printf("sum will be %d",natural(num));
    

    return 0;
}
int natural(int n){
if (n==1)
    {return 1;}
    else{
return n+natural(n-1);}
}