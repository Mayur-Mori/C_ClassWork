#include<stdio.h>
main()
{
	int i, j ,k ;
	i=1;
	k=1;
	while(i<=5)
	{
	j=1;
	
	while(j<=i)
	{
	
		printf(" %d ",k++);
		j++;
		}
		printf("\n");
		i++;	
	}
}
