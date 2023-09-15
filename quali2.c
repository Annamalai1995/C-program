#include<stdio.h>
#include<string.h>
#include"quali1.c"
void hello()
{
    char skill[50]="white";
    printf("%s\t%s\n",word,skill);
}
int main()
{
    strcpy(word,"Priya");
    char skill[50]="";
    strcpy(skill,"Java");
    printf("\n Main \n");
    printf("%s\t%s\n",word,skill);
    hello();
    return 0;
}

