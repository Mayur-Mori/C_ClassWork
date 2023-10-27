//fibonacci series 0 1 1 2 3 5 8 13 21.............

#include<stdio.h>
main()
{
	int i=0,j=1,k,n;
	printf("\n\n Enter the number :");
	scanf("%d",&n);
	printf("\n %d %d ",i,j);
	k=i+j;
	while(k<=n)
	{
		printf(" %d ",k);
		i=j;
		j=k;
		k=i+j;
	}
}
