//using library function String reverse
#include <stdio.h>  
#include <string.h>  
int main()  
{  
    char name[20]; //String Declare 
    printf (" \n Enter a string : ");  
    scanf ("%s", name);  
      
    // use strrev()
    printf (" \n  reverse of a string: %s ", strrev(name));  
    return 0;  
}  