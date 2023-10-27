#include<stdio.h>
main()
{
	int day;
	printf("\n\n Enter a day :");
	scanf("%d",&day);
	
	switch(day)
	{
		case 1:
			printf("\n\n Sunday it is...");
			break;
		case 2:
			printf("\n\n Monday it is...");
			break;
		case 3:
			printf("\n\n Tuesday it is...");
			break;
		case 4:
			printf("\n\n Wednesday it is...");
			break;
		case 5:
			printf("\n\n Thursday it is...");
			break;
		case 6:
			printf("\n\n Friday it is...");
			break;
		case 7:
			printf("\n\n Saturday it is...");
			break;
		default:
			printf("\n\n You enter the invalid number...");
	}
}
