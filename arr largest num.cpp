//to display greatest number among 5 number
#include<stdio.h>
int main()
{
	int large,a[5];
	printf("enter five numbers\n");
	for (int i=0;i<=4;i++)
    {
    	scanf("%d",&a[i]);
	}
	large=a[0];
	for(int i=1;i<=4;i++)
	{
		if(large<a[i])
		large=a[i];
	}
	printf("the largest number is %d",large);
	return 0;
}
