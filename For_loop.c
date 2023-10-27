#include<stdio.h>
main()
{
	int n,i,even,odd;
	printf("\n\n Enter the number :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i%2==0){
		
		even=i;
		printf("\n\n %d is Even number...",even);
	} else
	{
		odd=i;
		printf("\n\n %d is odd number...",odd);
	}
	}
}
