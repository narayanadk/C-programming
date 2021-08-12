#include<stdio.h>
#include<math.h>
int main()
{
	float a,b;
	printf("enter any number\t",a);
	scanf("%f",&a);
	
	//sq root//
	b=sqrt(a);
	printf("the sq root of %.4f is %.4f\t\n",a,b);
	
	//cube root//
	float c=cbrt(a);
	printf("cube root of %.4f is %.4f\t\n",a,c);
	
	//power//
	float d=pow(a,2);
	printf("the square of %.4f is %.4f\t\n",a,d);
	
	//lowest point value//
	float e=floor(c);
	printf("floor of %.4f is %.4f\t\n",c,e);
	
	//highest point value//
	float f=ceil(c);
	printf("ceil of %.4f is %.4f\t\n",c,f);
	return 0;
	
	
}
