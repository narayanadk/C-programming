#include<stdio.h>
int main()
{
/*	int a;
	printf("enter any number\t");
	scanf("%d",&a);
	if(a>0)
	{
		printf("the number is positive");
}
else 
printf("the number is negative");*/

	int a;
	printf("enter any number\t");
	scanf("%d",&a);
	if(a%7==0)
	printf("the number is divisible by 7");
	else 
	printf("the number is not divisible by 7");
	
	return 0;
}
