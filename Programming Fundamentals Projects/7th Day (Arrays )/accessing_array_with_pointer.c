#include <stdio.h>
#include <conio.h>
int main()
{
int nums[5];
int *ptr=nums;
// int *ptr=&nums[0];
for(int i=0;i<5;i++){
printf("\nenter the value for %d element : ",i+1);
scanf("%d",ptr);
printf("\n saved at address value for %d element : %u ",i+1,ptr);
ptr++;
}
// int *ptr2=&nums[0];
printf("now value of ptr is %d",ptr);
for(int i=0;i<5;i++){
printf("\nthe value for %d element : %d ",i+1,nums[i]);

}


}