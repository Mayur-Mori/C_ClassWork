//To make the simple calculator

#include<stdio.h>
main()
{
	int a,b,c;
	 printf("\n\n The value of a is :");
	 scanf("%d",&a);
	 
	 printf("\n\n The value of b is :");
	 scanf("%d",&b);

	c=a+b;
	printf("\n\n Addition of a and b is %d",c);
	c=b-a;
	printf("\n\n Subtraction of b and a is %d",c);
	
	c=a*b;
	printf("\n\n Multiplication of a and b is %d",c);
	
	c=b/a;
	printf("\n\n Division of a and b is %d",c);
	
	
}
