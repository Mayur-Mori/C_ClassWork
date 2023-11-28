//WAP to get a number from the user to check whether the number is odd or even

#include<stdio.h>


	void check1(int Num);
	
	main()
	{
		int num;
		printf("\n\n Enter the number :");
		scanf("%d",&num);
		//printf("%d",n);
		check1(num);
	}
	
	void check1(int num)
	{
		//printf("%d",num);
		if(num%2==0)
		{	
		printf("\n\n Number is even!!");
		}
		else
		{
			printf("\n\n Number is odd!!!");
		}
	}
	

