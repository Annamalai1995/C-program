// Switch : == int char

#include<stdio.h>

int main()
{

char travel;int amt;
	travel=getchar();
	switch(travel)
	{
		case 'b':printf("\nBangalore timing after 12pm");//break;
		goto B;
		case 'o':printf("\nOdisa timing after 1am");
		//goto O;
		break;
		case 'm':printf("\nMumbai timing after 4pm");break;
		case 'c':printf("\nChennai timing after 9pm");break;
		//O:
		B:
		
		printf("\nEnter amount to travel odisa: ");
		scanf("%d",&amt);
		(amt>=300)?printf("\nU can travel"):printf("\ncan't");
	}
}