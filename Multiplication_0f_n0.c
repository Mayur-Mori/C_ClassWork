#include<stdio.h>
main()
{
		int i,n,ans;
	printf("\n\n Enter the number :");
	scanf("%d",&n);
	i=1;
		printf("\n\n Table of %d is....",n);
	while(i<=10)
	{
	    ans=i*n;
		printf("\n\n %d * %d = %d ",n,i,ans);
		i++;
	}
	
}
