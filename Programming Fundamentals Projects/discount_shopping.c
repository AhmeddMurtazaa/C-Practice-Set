#include <stdio.h>
#include <conio.h>
int main()
{int quantity;
    printf("\n enter the how many products you bought : ");
    scanf("%d",&quantity);
    float bill = quantity *100; //one product cost =100 

    if(bill>=1000)
        {printf("\n You shopped more than 1000 so you get 10 percent discount");
        printf("\nyour original bill was %.2f ",bill);
        float discount= bill/10.0;
        printf("\nyou recieved %.2f rs in discount",discount);
        printf("\nyour discounted bill is %.2f",bill-discount);
        }
    else
        {printf("\n you shopped less than 1000 so you don't avail any discount");
        printf("\nyour bill is %.2f",bill);
        }
    return 0;
}