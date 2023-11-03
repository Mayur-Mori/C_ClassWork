#include<stdio.h>
main()
{
	int size,a[3][3],b[3][3],c[3][3],i,j,k,sum;
	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("\n\n a[%d][%d] = ",i,j);
		scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("\n\n b[%d][%d] = ",i,j);
		scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=0;
			for(k=0;k<3;k++)
			{
				sum=sum+a[i][k]*b[k][j];
				c[i][j]=sum;
			}
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("\n\n c[%d][%d] = %d ",i,j,c[i][j]);
		}
	}
}
