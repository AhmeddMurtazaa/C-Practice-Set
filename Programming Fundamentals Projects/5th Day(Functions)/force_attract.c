#include <stdio.h>
#include <conio.h>
float force(float mass);
int main()
{float m;
printf("\nEnter the value of mass in kilograms ");
scanf("%f",&m);
printf("\nThe value of force of attraction in newton is %.2f",force(m));
    return 0;
}
float force(float mass){
    return mass*9.8;
}