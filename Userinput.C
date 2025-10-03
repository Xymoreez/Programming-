/*
Name:Simon Njiiri 
Reg:CT101/G/26500/25
*/
#include<stdio.h>
int main()//c program to prompt user to enter height,bank balance,phone number 
{
int height;
char phonenumber[20];
float bankbalance;
printf("enter your height\n");
scanf("%d", & height);
printf("enter your phone number\n");
scanf("%s",phonenumber);
printf("enter your bank balance\n");
scanf("%f", &bankbalance);
printf("\n user information \n");
printf("height%d\n",height);
printf("phonenumber%s\n",phonenumber);
printf("bankbalance ksh%.2f\n",bankbalance);
return 0;
}
