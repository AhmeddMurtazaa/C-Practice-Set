#include <stdio.h>
#include <conio.h>
int main()
{
    int day_num;
    printf("\nEnter the number your day comes at : ");
    scanf("%s",&day_num);

    switch (day_num)
    {case 1:
        printf("your day is Monday");
        break;
    case 2:
        printf("your day is Tueday");
        break;
    case 3:
        printf("your day is Wednesday");
        break;
    case 4:
        printf("your day is Thursday");
        break;
    case 5:
        printf("your day is Friday");
        break;
    case 6:
        printf("your day is Saturday");
        break;
    case 7:
        printf("your day is Sunday");
        break;
    default:
        printf("invalid number");
    
    }

    return 0;
}