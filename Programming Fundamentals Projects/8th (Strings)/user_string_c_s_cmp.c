#include <stdio.h>
#include <conio.h>
#include<string.h>
int main()
{ char name[43],name2[43],c;
int i=0;

printf("Enter the value for first string : \n");
scanf("%s",name);
printf("Enter the value for second string character by character : \n");

while(c!='\n')
{
	fflush(stdin);
	scanf("%c",c);
	name2[i]=c;
	i++;
}
name2[i-1]= '\0';

printf("The value of first string is %s\n",name);
printf("The value of first string is %s\n",name2);
printf("The comparison of name and name2, both strings is %d ",strcmp(name,name2));
    return 0;
}
