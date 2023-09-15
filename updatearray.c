#include <stdio.h>
void main()
{
    int pos;
    int newvalue;
    int cosmo[6]={11,12,27,23,79,125};
    printf(" before update values \n");
    for(int size=0;size<6;size++)
    {
        printf("%d \t",cosmo[size]);
    }
    printf(" which position you want update in your array list\n");
    scanf("%d",&pos);
    printf("\nEnter your new value\n");
    scanf("%d",&newvalue);
    cosmo[pos]=newvalue;
     printf(" After updated values \n");
    for(int size=0;size<6;size++)
    {
        printf("%d \t",cosmo[size]);
    } 
}