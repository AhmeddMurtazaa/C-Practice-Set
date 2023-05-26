#include <stdio.h>
#include <conio.h>
int change(int a);
int main()
{int a =55;
printf("value of a before change %d",a);
   int sum= change(a);
printf("\nvalue of a after change by direct function %d",a);
printf("\nvalue of a after change by using return in function %d",sum);

    return 0;
}

int change(int a)
{
    a=477;
    return a;
}