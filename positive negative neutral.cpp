#include<stdio.h>
int main()
{
	int a;
	printf("enter any number\t");
	scanf("%d",&a);
	if(a!=0)
	{
		if(a>0)
		printf("%d is positive",a);
		else
		printf("%d is negative",a);
	}
	else 
	printf("%d is zero",a);
	return 0;
	
}
