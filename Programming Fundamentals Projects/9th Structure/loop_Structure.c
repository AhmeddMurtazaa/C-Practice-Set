#include<stdio.h>
struct student{
	int roll;
	float gpa;
	char name[];
};
main()
{
	struct student s[2];
	int i=0,j=0;
	
	for(i=0;i<2;i++) //for user input
	{printf("\nEnter your roll no : ");
	scanf("%d",&s[i].roll);
	printf("\nEnter your gpa : ");
	scanf("%f",&s[i].gpa);
	printf("\nEnter your first name: ");
	scanf("%s",&s[i].name);
	}
	
	for(j=0;j<2;j++){
	printf("\nStudent no. %d roll no : %d\n",j+1,s[j].roll);
	printf("\nStudent no. %d gpa : %f\n",j+1,s[j].gpa);
	printf("\nStudent no. %d first name:%s\n",j+1,s[j].name);
	}
}
