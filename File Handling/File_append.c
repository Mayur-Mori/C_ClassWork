//To demonstrate the file creation

#include<stdio.h>
main()
{
	FILE *fptr;//To access the file with pointer file type.
	char data[30]="the demo file of C";//Data to store in file
	//fopen(filename,mode);
	fptr=fopen("File Handling.txt","a");//to open the file in write mode
	
	if(fptr == NULL)//checking that the file is exist or not.
	{
		printf("\n\n File is not opened.....");
	}
	
	else
	{
		if(fptr!=EOF)//EOF is end of file position
		{
			fputs(data,fptr);//to write the data into file
			fputs("\n",fptr);
		}	
	
		fclose(fptr);
	}
}
