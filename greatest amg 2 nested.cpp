#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	if(a!=b)
	{
		if(a>b)
		printf("%d is greatest",a);
		else 
		printf("%d is greater",b);
	}
	else
	printf("both numbers are equal");
	return 0;
}
