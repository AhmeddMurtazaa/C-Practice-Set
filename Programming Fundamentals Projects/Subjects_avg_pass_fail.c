#include <stdio.h>
int main()
{
int g;
float x;
int a,b,c,d,e;
// int h=500;
float per;
printf("Enter marks of your 5 subjects: \n");
scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
g=a+b+c+d+e;
per=g/5;
printf("Percentage of your marks: %f",per);
getchar();
return 0;
}