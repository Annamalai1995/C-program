//parsing string other formats
#include<stdio.h>
int  main()
{
//     char yet[20]="9.457852";
//     float data=0.0F;
//     sscanf(yet,"%f",&data);
//    // printf("%f,(yet+2));
//    printf("%f\n",(data+2));

//sscanf(str,"fs",&var)
char helo[100]="";
int adhar=7854582,mobile=789456;
double income=5.5;
char category='i',name[50]="Annamalai",pan[10]="BTMA789A";
sprintf(helo,"Name is %s,pan:%s,Adhar is %d,Mobile:%d,category %c,income is %lf",name,pan,adhar,mobile,category,income);
puts(helo);


}