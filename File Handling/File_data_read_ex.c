//To demonstrate the file creation

#include<stdio.h>
main()
{
	FILE *fptr;//To access the file with pointer file type.
	char data[30];//Data to store in file
	//fopen(filename,mode);
	fptr=fopen("File Handling.txt","r");//to open the file in write mode
	
	if(fptr == NULL)//checking that the file is exist or not.
	{
		printf("\n\n File is not opened.....");
	}
	
	else
	{
		while(fgets(data,30,fptr)!=NULL)
		{
			printf("\n\n %s",data);
		}
		fclose(fptr);//File is Closed after Reading
	}
}
