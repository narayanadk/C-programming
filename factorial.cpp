#include<stdio.h>
int main()
{
	int n,f=1,i;
	printf("enter any number ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("the factorial is %d",f);
	return 0;
}
