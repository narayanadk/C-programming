#include<stdio.h>
int main()
{
	int a;
	printf("enter any number");
	scanf("%d",&a);
	if(a>0)
	{
		if(a%7==0)
		printf("the number is divisible by 7");
		else 
		printf("the number is not divisible by 7");
	}
	else
	printf("enter positive number");
	return 0;
}
