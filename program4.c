//getc,getchar,getch(),getche put,putchar()
#include<stdio.h>
#include<conio.h>
void main()
{
    char gender='\0';
//    gender=getc(stdin);
//     putc=(gender,stdout);
     gender=getchar();
    putchar(gender);
    gender=getch();
    gender=getche();


    printf("Your gender is :%c",gender);

   
    
}