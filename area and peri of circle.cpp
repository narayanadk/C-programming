#include<stdio.h>
#include<math.h>
int main()
{
float r,a,c;
printf("Enter radius ");
scanf("%f",&r);
a=3.14*pow(r,2);
c=2*3.14*r;
printf("Area = %f \n Circumference= %f ",a,c);
return 0;
}
