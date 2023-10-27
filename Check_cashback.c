#include<stdio.h>
main()
{
	int recharge_value;
	printf("\n\n Enter the value :");
	scanf("%d",&recharge_value);
	
	if(recharge_value>399)
	printf("\n\n The user is eligible for cashback !...");
	else 
	printf("\n\n Sorry user is not eligible for cashback !...");
}
