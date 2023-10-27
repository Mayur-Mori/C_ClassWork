#include<stdio.h>
main()
{
	int a , b , choice;
	printf("\n\n Enter the number a :");
	scanf("%d",&a);
	printf("\n\n Enter the number b :");
	scanf("%d",&b);
	
	printf("\n\n ...........Arithmetic Operation...........");
	printf("\n\n 1.Addition");
	printf("\n\n 2.Subtraction");
	printf("\n\n 3.Multiplication");
	printf("\n\n 4.Division");
	printf("\n\n 5.Modulus");
	printf("\n\n ..........................................");
	printf("\n\n Enter the number choice:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:printf("\n\n Addition of these Two number is :%d",(a+b));
		break;
		case 2:printf("\n\n Subtraction of these Two number is :%d",(a-b));
		break;
		case 3:printf("\n\n Multiplication of these Two number is :%d",(a*b));
		break;
		case 4:printf("\n\n Division of these Two number is :%d",(a/b));
		break;
		case 5:printf("\n\n Modulus of these Two number is :%d",(a%b));
		break;
		default:
		printf("\n\n You have entered the wrong choice......");
		break;
	}
}
