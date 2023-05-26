#include <stdio.h>
#include <conio.h>
int main()
{int a=6,b=7;
int*ptr =&a,*ptr2=&b;
printf("the value of pointers is %u %u ",ptr,ptr2);
//ptr--; for equality
if(ptr>ptr2)
{printf("\naddress of a is higher which is %u",ptr);}
else if(ptr2>ptr)
{printf("\naddress of a is higher which is %u",ptr2);}
// else if(ptr2==ptr)
// {printf("\nthey're address is equal which is %u",ptr2);}
// comparison of ptrs

//printf("\nthe value of pointer after increment is %u",++ptr);
//add *p with num

//printf("\nthe value of pointers after decrement is %u ",(ptr-ptr2)*4);
// subtract *p with *p then multiplied with 4 to get diff in bytes b/w them

//printf("\nthe value of pointers after decrement is %u",--ptr);
//subtract *p with num
    return 0;
}