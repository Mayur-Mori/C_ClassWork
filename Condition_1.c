//To check whether the number is zero,positive and negative


#include<stdio.h>
main()
{
	int num;
	
	printf("\n\n Enter the number :");
	scanf("%d",&num);
	if(num==0)  // if (written only int variable without any value) always check for 1 (boolean value)
	{
		printf("\n\n This number is zero");
	}
	else //check for 0 value (boolean value)
	{
	
	if(num>=0)
	{
		printf("\n\n this number is positive");
	}
	else
	{
		printf("\n\n this number is negative");
	}
}
}


