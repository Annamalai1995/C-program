//call by value
#include<stdio.h>
void value(int val)
{
	//val=200
	printf("Define the function val=%d \n",val);
	val=val+150; // 200+150=350
	printf("Add the value to after insert value val=%d \n",val);
}
int main()
{
	int a=200;
	int change;
	printf("VAlue added before call a=%d\n",a);
	value(a); // function value passing
	printf("After added value call a=%d\n",a);
	return 0;
}
