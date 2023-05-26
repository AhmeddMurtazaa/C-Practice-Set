#include<stdio.h>
#include<string.h>
struct student{
	int rollno;
	float gpa;
	char name[];
};

main()
{ int i;
struct student s1,s2,s3;

	printf("Enter the roll no of student s1 : ");
	scanf("%d",&s1.rollno);
	printf("Enter the gpa of student s1 : ");
	scanf("%f",&s1.gpa);
	printf("Enter the name no of student s1 : ");
	scanf("%s",s1.name);
	
	printf("Enter the roll no of student s2 : ");
	scanf("%d",&s2.rollno);
	printf("Enter the gpa of student s2");
	scanf("%f",&s2.gpa);
	printf("Enter the name no of student s2");
	scanf("%s",s2.name);

	
	printf("Enter the roll no of student s3 : ");
	scanf("%d",&s3.rollno);
	printf("Enter the gpa of student s3");
	scanf("%f",&s3.gpa);
	printf("Enter the name no of student s3");
	scanf("%s",s3.name);
	
	
	
	
}
