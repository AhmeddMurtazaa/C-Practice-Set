#include <stdio.h>
#include <conio.h>
int main()
{
    int radius,height;
    
    printf("\nheight of the cylinder is :");
    scanf("%d", & height);
    printf("radius of the cylinder is :");
    scanf("%d", & radius);

    float pi = 3.14;
    float area = pi * radius * radius;
    printf("\nthe area of the cylinder is %f \n", area);

    printf("the volume of this cylinder is %f\n", pi * radius * radius * height);
    return 0;
}