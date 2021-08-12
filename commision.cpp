#include<stdio.h>
int main()
{
	float sa,c;
	printf("enter sales amount\t");
	scanf("%f",&sa);
	if(sa<=1000)
	c=sa*5/100;
	else if(sa>1000 && sa<=2000)
	c=sa*10/100;
	else
	c=sa*12/1000;
	printf("commision amount is %.4f",c);
	return 0;
}
