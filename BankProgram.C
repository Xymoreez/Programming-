/*
Name:Simon Rukungu Njiiri 
Reg no:CT101/G/26500/25
Description:Bank program for loan qualifications 
*/
#include<stdio.h>
int main ()
{
int age;
float income;

//enter your details
printf("enter your age\n");
scanf("%d", &age);

printf("enter your annual_income\n");
scanf("%f", &income);
//loan qualifications 
if (age>=21,income>=21000)
{
printf("you qualify for a loan");
}
if (age<=21,income<=21000)
{
printf("you do not qualify for a loan");
}
return 0;
}
