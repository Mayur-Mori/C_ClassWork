//program for with arguments with return value

#include<stdio.h>

int sum(int x, int y);

main()
{
	int a, b, c;
	printf("\n\n Enter the numbers : ");
	scanf("%d %d", &a, &b);
	c=sum(a,b);
	printf(" Sum = %d",c);
}

int sum(int x, int y)
{
	int z;
	z=x+y;
	return (z);
}

