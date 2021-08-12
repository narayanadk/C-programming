#include<stdio.h>
int main()
{
	float a,b;
	char c;
	printf("+ = Addtition\n - = Subtraction\n * = Multiplication\n / = Division");
	printf("\nchoose your operator\t");
	scanf("%c",&c);
	switch(c)
	{
		case'+':
			printf("Enter any two numbers\t");
	scanf("%f%f",&a,&b);
			printf("the sum is %f",a+b);
			break;
		case'-':
			printf("Enter any two numbers\t");
	scanf("%f%f",&a,&b);
			printf("the difference is %f",a-b);
			break;
		case'*':
			printf("Enter any two numbers\t");
	scanf("%f%f",&a,&b);
			printf("the product is %f",a*b);
			break;
		case'/':
			printf("Enter numerator and denominator\t");
	scanf("%f%f",&a,&b);
			printf("the quotient is %f",a/b);
			break;
		default:
			printf("choose correct operation");
			break;
	}
	return 0;
}
