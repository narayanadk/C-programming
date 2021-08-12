//to display smallest number among 5 number
#include<stdio.h>
int main()
{
	int small,a[5];
	printf("enter five numbers\n");
	for (int i=0;i<=4;i++)
    {
    	scanf("%d",&a[i]);
	}
	small=a[0];
	for(int i=1;i<=4;i++)
	{
		if(small>a[i])
		small=a[i];
	}
	printf("the smallest number is %d",small);
	return 0;
}
