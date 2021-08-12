// to accept 6 numbers and calculate sum and average of it
#include<stdio.h>
int main()
{
	int sum=0,a[5];
	printf("enter five numbers\n");
	for (int i=0;i<=5;i++)
    {
    	scanf("%d",&a[i]);
        sum=sum+a[i];
	}
	float av=float(sum)/5;
	printf("\nThe sum of numbers is %d",sum);	
	printf("\nThe average is %.4f",av);
	return 0;
}
