#include <stdio.h>
#include <conio.h>
int main()
{
    int num,proof=0;
    printf("\nenter your number and i'll tell you if it's prime or not :");
    scanf("%d",&num);
    // for(int i=2;i<num;i++)       with for loop
    // {
    //     if(num%i==0)
    //     {proof=1;
    //     break;
    //     }
    // }

    // int i=2;             with while loop
    // while(i<num)
    // {
    //     if(num%i==0)
    //     {proof=1;
    //     break;
    //     }
    // i++;
    // }
    int i=2;
    do
    {
        if(num%i==0)
        {proof=1;
        break;
        }
    i++;
    }
    while(i<num);
    
    if(proof==1)
    {printf("\nyour number is not prime");
    }
    else{printf("\nyour number is prime");
    }
    return 0;
}