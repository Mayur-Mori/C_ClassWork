// program for no argumnets no return value


#include<stdio.h>
void sum(void);  //declaration
//void sum();

main()
{	
	sum();  //calling
}

void sum(void)  //definition
{
	int a, b, c;
	printf("\n\n Enter the numbers : ");
	scanf("%d %d", &a, &b);
	c=a+b;
	printf("\n Sum = %d",c);
} 
