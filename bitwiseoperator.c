#include <stdio.h>
int main() 
{
int sun = 30;	
int moon = 41;	
int Earth = 0;           

Earth = sun & moon;        
printf("AND - Value of sun is %d\n", Earth );

Earth = sun | moon;       
printf("OR - Value of Earth is %d\n", Earth );


    // char flex='R';int marco=620;
    // printf("\n%d\t%d",flex,marco);

    // printf("\n%d",(flex&145));
    // printf("\n%d",(marco|432));



}


