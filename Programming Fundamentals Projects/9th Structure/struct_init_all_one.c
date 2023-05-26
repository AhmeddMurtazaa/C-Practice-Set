#include<stdio.h>
struct employee{
	int roll_no;
	float gpa;
	char name[20];
};
main()
{ struct employee Ahmed={33,3.05,"Ahmed"};

printf("Roll no is : %d\n",Ahmed.roll_no);
printf("gpa is : %f\n",Ahmed.gpa);
printf("name is is : %s\n",Ahmed.name);

// struct employee Ahmed{0}; --> this will initialize all elements of Ahmed to 0
}
