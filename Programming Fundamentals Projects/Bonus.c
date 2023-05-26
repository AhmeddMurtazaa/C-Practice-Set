#include <stdio.h>
#include <conio.h>
int main()
{ float sal,ser,bonus;
    printf("\nEnter your current salary : ");
    scanf("%f",&sal);
    printf("\nEnter your service years : ");
    scanf("%f",&ser);

    if (ser>=5)
        {printf("\nyou get bonus of 5 percent on your salary because of your service\n");
        bonus=0.05*sal;
        printf("\nyou get a bonus of %.2f\n",bonus);
        printf("\nyour new salary will be : %.2f \n",bonus+sal);
        printf("\nthank you for your loyalty to us\n");
        }
    
    else
        {
            printf("\nyou dont get any bonus :( sorry.");
            printf("\nyour salary will remain same as it is which is %.2f",sal);
        }

    return 0;
}