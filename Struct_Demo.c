#include<stdio.h>
#include<string.h>
struct student
{
	int rollno;
	char name[20];
};
main()
{
	struct student s1;
	struct student s2;
	
	s1.rollno=1;
	strcpy(s1.name,"Mayur");
	
	s2.rollno=2;
	strcpy(s2.name,"Meet");
	
	printf("\n\n Roll no : %d",s1.rollno);
	printf("\n\n Name : %s",s1.name);
	
	
	printf("\n\n Roll no : %d",s2.rollno);
	printf("\n\n Name : %s",s2.name);
	
	
	
}
