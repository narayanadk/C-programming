#include<stdio.h>
int main()
{
	float a=3.141592653589793238462643383279502884197169;
	double b=3.141592653589793238462643383279502884197169;
	long double c=3.141592653589793238462643383279502884197169;
	printf("the value is %.16f\n",a);
	printf("the value is %.18lf\n",b);
	printf("the value is %.21Lf\n",c);
	
	return 0;
	
}
