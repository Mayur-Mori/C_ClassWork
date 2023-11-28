//program for no arguments but return value

#include<stdio.h>
int sum(void);  //declaration

main()
{	
	int z;
	z=sum();  //calling
	printf("\n\n Sum = %d ",z);
}

int sum(void)  //definition
{
	int a, b, c;
	printf("\n\n Enter the numbers : ");
	scanf("%d %d", &a, &b);
	c=a+b;
	return c;
}
