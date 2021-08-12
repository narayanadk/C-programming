#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter any three numbers\t");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b&&a>c || a>b&&a<c)
	printf("%d is middle number",a);
	else if(b<a&&b>c || b>a&&b<c)
	printf("%d is middle number",b);
	else
	printf("%d is the middle number",c);
	return 0;
	
}
