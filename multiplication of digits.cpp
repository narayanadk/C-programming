#include<stdio.h>
int main()
{
	int n,r,s=1;
	printf("enter any number ");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		s=s*r;
		n=n/10;
	}
	printf("the multiplication digits is %d",s);
	return 0;
}
