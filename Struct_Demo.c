#include<stdio.h>
#include<string.h>
struct student
{
	int rollno;
	char name[20];
	float marks;
}s1,s2;
main()
{

	
	s1.rollno=1;
	strcpy(s1.name,"Mayur");
	s1.marks=60;
	s2.rollno=2;
	strcpy(s2.name,"Meet");
	s2.marks=65;
	printf("\n\n Roll no : %d",s1.rollno);
	printf("\n\n Name : %s",s1.name);
	printf("\n\n Marks : %f\n",s1.marks);
	printf("\n**************************");
	printf("\n\n Roll no : %d",s2.rollno);
	printf("\n\n Name : %s",s2.name);
	printf("\n\n Marks : %f",s2.marks);
	
	
}
