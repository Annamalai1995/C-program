#include<stdio.h>
void main()
{
    int alpha[8];
    int a;
    printf("Read the Printf Elements of Array \n");
    
    printf("Input OF array Elements:\n");
    for(int a=0;a<8;a++)
    {
        printf("Elements-%d:",a);
        scanf("%d",&alpha[a]);

    }
    printf("\nElements In array are:");
    for(a=0;a<8;a++)
    {
        printf("%d ",alpha[a]);
    }
    printf("\n");
}