//function with aruguments and without return value 
#include<stdio.h>
void add(int a,int b)
{
	printf("\nThe value is %d",a+b);
	
}

void main()
{
	int a,b,c;
	printf("\n sumof numbers");
	printf("\nenter value");
	scanf("%d%d",&a,&b);
	add(a,b);
	
}
