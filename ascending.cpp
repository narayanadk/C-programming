#include<stdio.h>
int main()
{
	int i,j,n,a[100],temp;
	printf("enter number of elements:  ");
	    scanf("%d",&n);
	printf("enter the elements of array:   ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			
			}
		}
	}
	printf("the numbers in ascending order is \n");
	for (i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
