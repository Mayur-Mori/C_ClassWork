#include<stdio.h>
#include<string.h>
struct student
{
	int rollno;
	char name[20];
	float marks;
}s[5];
main()
{
	int i;
	for(i=1;i<=5;i++)
	{
		printf("\n\n Enter the name of s[%d] = ",i);
		scanf("%s",&s[i].name);
		printf("\n\n Enter the rollno of s[%d] = ",i);
		scanf("%d",&s[i].rollno);
		printf("\n\n Enter the marks of s[%d] = ",i);
		scanf("%f",&s[i].marks);
	}
	for(i=1;i<=5;i++)
	{
	printf("\n\n Roll no : %d",s[i].rollno);
	printf("\n\n Name : %s",s[i].name);
	printf("\n\n Marks : %f\n",s[i].marks);
	printf("\n**************************");
	}
}



