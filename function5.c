//function with arguments and with return value 
#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
void main()
{
	int a,b,c;
	printf("\n sum of number");
	printf("Enter the number");
	scanf("%d %d",&a,&b);
	c=add(a,b);
	printf("\n adding number:%d",c);
	
}
