#include<stdio.h>
int main()
{
	int a=0,b=0;
	int ar[3][3]={{11,45,55},{78,85,90},{66,100,109}};
	for(a=0;a<3;a++)
	{
		for(b=0;b<3;b++)
		{
			printf("ar[%d][%d]=%d \n",a,b,ar[a][b]);
			
		}
	}
	return 0;
	
}