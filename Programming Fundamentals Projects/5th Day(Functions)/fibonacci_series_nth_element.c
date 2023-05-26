#include <stdio.h>
#include <conio.h>
int fibonacci(int n);
int main()
{int n;
printf("\Enter the number you want fibonacci series\' element");
scanf("%d",&n);
int result= fibonacci(n);
printf("%d",result);

    return 0;
}

int fibonacci(int n){
for (int i=0;i==n;i++){
if ((n=0)||(n=1)){
    return 1;
    }
else
    {return  fibonacci (n-1) + fibonacci(n-2);
    }
}
}