#include<stdio.h>
main()
{
	char choice;
	printf("\n\n Enter the Alphabet of your choice :");
	scanf("%c",&choice);


	
	switch(choice)
	{
		case 'a':printf("\n\n You have entered the vowel......");
		break;
		case 'e':printf("\n\n You have entered the vowel......");
		break;
		case 'i':printf("\n\n You have entered the vowel......");
		break;
		case 'o':printf("\n\n You have entered the vowel......");
		break;
		case 'u':printf("\n\n You have entered the vowel...... ");
		break;
		default:
		printf("\n\n You have entered the Cosonant......");
		break;
	}
}
