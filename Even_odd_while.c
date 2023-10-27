#include<stdio.h>
main()
{
	int n,i,even,odd;
	printf("\n\n Enter the number :");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==0){
		even=i;
		printf("\n\n %d is even!",even);
	}
		else
		{
			odd=i;
			printf("\n\n %d is odd! ",odd);
		}
		i++;
	}
	}
		
