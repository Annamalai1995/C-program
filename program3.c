#include<stdio.h>
//#include<conio.h>
void main()
{
    char finalone[50]="";
    char pro[30]="";
    int price;
    scanf("%s%d",pro,&price);
    sprintf(finalone,"your order: %s with price %d",pro,price);
    printf("\n%s",finalone);

}