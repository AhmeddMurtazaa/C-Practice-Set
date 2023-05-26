#include <stdio.h>
int main()
{
    int calculus, programming, dld, islamiat;
    float total;

    printf("Enter calculus marks\n");
    scanf("%d",&calculus);
    
    printf("Enter programming marks\n");
    scanf("%d",&programming);
    printf("Enter dld marks\n");
    scanf("%d",&dld);
    printf("Enter islamiat marks\n");
    scanf("%d", &islamiat);

    total = (calculus + programming + dld + islamiat) / 4;

    if ((total <= 40) || (calculus < 33) || (programming < 33) || (dld < 33) || (islamiat < 33))
        {
        printf("your percentage is %f and you are fail in this semester", total);
        }
    else
        {
        printf("your percentage is %f and you are pass in this semester", total);
        }
}
