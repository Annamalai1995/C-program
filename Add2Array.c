#include<stdio.h>
void main()
{
	int row,column;
	printf("Enter the rows size");
	scanf("%d",&row);
	printf("Enter the colum size");
	scanf("%d",&column);
	int arr1[row][column];
	int a,b;
	printf("enter the array elements:\n");
	for(a=0;a<row;a++)
	{
		for(b=0;b<column;b++)
		{
			scanf("%d",&arr1[a][b]);
			
		}
	}
	int sum=0;
	for(a=0;a<row;a++)
	{
		for(b=0;b<column;b++)
		{
			sum+=arr1[a][b];
			
		}
	}
	printf("sum of elemnts:%d",sum);
	 
	}