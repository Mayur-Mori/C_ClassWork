//program for with arguments but no return value
	
void sum(int x, int y);

main()
{
	int a, b;   
	printf("\n\n Enter the numbers : ");
	scanf(" %d  %d",&a, &b);  //a=10  b=20
	sum(a,b);
	
}

void sum(int x, int y) //copy of a=10 goes to x, copy of b=20 goes to y
{
	int z;
	z=x+y; //30
	printf(" Sum = %d",z);

}
