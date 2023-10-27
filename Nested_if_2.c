#include<stdio.h>
main()
{
	int n;
	printf("\n\n Enter the number n :");
	scanf("%d",&n);
	
	if(n%5==0)
	{
		if(n%3==0)
		printf("\n\n The number is divisible by both");
		else
		printf("\n\n The number is divisible by 5");
	}
	else
	{
	  if(n%3==0)
	printf("\n\n The number is divisible by 3");
	else 
	printf("\n\n Number is not divisible by 3 or 5");
}
}
