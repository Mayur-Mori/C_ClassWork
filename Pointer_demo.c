#include<stdio.h>
main()
{
	int myage=21;
	int* ptr=&myage;
	
	printf("%d\n",myage);
	printf("%d\n",&myage);
	printf("%d\n",ptr);
}
