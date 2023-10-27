#include<stdio.h>
main()
{
	int a,b;
	printf("\n\n Enter the number a :");
	scanf("%d",&a);
	printf("\n\n Enter the number b :");
	scanf("%d",&b);
	
	if(!(a>0 && b>0))
	printf("\n\n Both number are greater than zero ");
	else
	printf("\n\n One number is less than zero");
}
