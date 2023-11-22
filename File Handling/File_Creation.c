//To demonstrate the file creation

#include<stdio.h>
main()
{
	FILE *fptr;//To access the file with pointer file type.
	
	//fopen(filename,mode);
	fptr=fopen("myfirstfile.txt","w");
	
	if(fptr==NULL)
	{
		printf("\n\n File is not opened.....");
	}
}
