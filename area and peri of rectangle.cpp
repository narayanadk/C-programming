// to display area and perimeter of a rectangle
#include<stdio.h>
int main() {
int l,b,a,p;
printf("Enter length and breadth");
scanf("%d%d",&l,&b);
a=l*b;
p=2*(l+b);
printf("Area = %d \n Perimeter= %d ",a,p);
return 0; }
