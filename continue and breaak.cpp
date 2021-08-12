#include<stdio.h>
int main()
{
	int i,j;
	for (i=1;i<=10;i++)
	{
		if (i==5) // break--> end the loop
		continue;// skip the loop
		printf("%d ",i);
	}
	return 0;
}
