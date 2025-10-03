/*
Name:Simon Rukungu Njiiri
Reg No:CT101/G/26500/25
Description:Volume and surface a cylinder cylinder
*/
#include <stdio.h>
//variable declaration 
int main()
{
float pi=3.142;
float radius,height;
float volume,surface_area;
//prompt to enter radius
printf("enter radius of the cylinder\n");
scanf("%f",&radius);
// prompt to enter height
printf("enter height of the cylinder\n");
scanf("%f",&height);

//calculation of the volume of the cylinder 
volume= pi * radius * radius * height;
printf("volume = %.2f\n", volume);
//calculation of the surface area of the cylinder
surface_area=2 *pi * radius * radius + 2* pi * radius * height;
printf("surface_area = %.2f\n", surface_area);

return 0;
}
