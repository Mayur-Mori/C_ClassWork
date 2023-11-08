#include<stdio.h>
#include<string.h>
struct Employee
{
	int Emp_ID;
	char Ename[20];
	int salary;
	
	struct Department
	{
	 int Dept_ID;
	 char Dname[20];
	}Dept;				
}Emp;

main()
{
	Emp.Emp_ID=101;
	strcpy(Emp.Ename,"ssssss");
	Emp.salary=20200;
	
	Emp.Dept.Dept_ID=12345;
	strcpy(Emp.Dept.Dname,"Production");
	
	printf("\n\n %d",Emp.Emp_ID);
	printf("\n\n %s",Emp.Ename);
	printf("\n\n %d",Emp.salary);
	printf("\n\n %d",Emp.Dept.Dept_ID);
	printf("\n\n %s",Emp.Dept.Dname);	
	
}
