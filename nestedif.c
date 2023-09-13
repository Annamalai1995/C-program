#include<stdio.h>
int main()
{
    int age=0; double wt=0.0;
    printf("Enter the age: ");
    scanf("%d",&age);

    if(age>=18)
    {
        printf("\nEntrant is adult");
        printf("\nEnter the wight: ");
        scanf("%lf",&wt);
        if(wt>=80.1&&wt<120&&age<=60)
        {
            printf("\nYou can play all dry and water games");
        }
        else if(wt>=60&&wt<=80&&age<=60)
        {
            printf("\nYou can play water games");
        }
        else if(wt<=60&&wt>=30)
        {
            printf("\nYou can play dry games");
        }
        else
        {
            printf("\nYou cannot play any games");
        }
    }
    else{
        printf("\nEntrant is kid");
    }

    return 0;
}
      
