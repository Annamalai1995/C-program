#include<stdio.h>
#include<conio.h>
void  main()
{
    printf(" Bio Data Details \n ");
    int EmpID;
    char EmpName[20];
    char EmpCompany[20]="";
    int Experiance;
    char Place[20]="";
    char Skillset[20]="";
    double salary;
    printf("Enter the  Employ Id ");
    scanf("%d",&EmpID);
    printf(" My id is:%d \n",EmpID);
    printf("\nenter the Employee name");
    scanf("%s",&EmpName);
    printf("My name is %s\n",EmpName);
    printf("Enter the companyname\n");
    scanf("%s",&EmpCompany);
    printf("MY company name is:%s\n",EmpCompany);
    printf("Experiance \n");
    scanf("%d",&Experiance);
    printf("MY Experiance is:%d \n",Experiance);
    printf("Enter the company Location \n");
    scanf("%s",&Place);
    printf("My Company Place:%s\n",Place);
    printf("Enter The skillSet \n");
    scanf("%s",&Skillset);
    printf("MY skillset is:%s\n",Skillset);
    printf("Salary\n");
    scanf("%lf",&salary);
    printf("MY salary is:%lf",salary);





}