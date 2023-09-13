//function without aruguments and with return value 
#include<stdio.h>
int add();
void main()
{
	int c;
	printf("\nSum of numbers");
	c=add();
	printf("%d",c);
	
}
int add()
{
	int a,b;
	printf("\nEnter the value");
	scanf("%d %d",&a,&b);
	return a+b;
}