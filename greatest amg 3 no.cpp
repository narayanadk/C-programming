#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter any three number\t");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{
	printf("%d is the greatest number",a);
}
	else if(b>c)
	{
	printf("%d is gretest number",b);
}
else if(c>b)
{
	printf("%d is gretest number",c);
}
else 
{
	printf("all numbers are equal");
}
	return 0;
	
}
