#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter any three number\t");
	scanf("%d%d%d",&a,&b,&c);
	if(a!=b!=c)
	{
	if(a<b&&a<c)
	printf("%d is the smallest number",a);
	else if(b<c)
	printf("%d is smallest number",b);
else 
	printf("%d is smallest number",c);
}
else 
printf("all numbers are equal");
	return 0;
	
}
