#include<stdio.h>
#include<math.h>
int main()
{
float u,t,a,s;
printf("Enter initial velocity , time and acceleration");
scanf("%f%f%f",&u,&t,&a);
s=u*t+0.5*a*pow(t,2);
printf("Distance covered is %.4f ",s);
return 0;
}
