// accept data and display in 2x3 matrix form
#include<stdio.h>
int main()
{
	int b,c,i,j;
	printf ("enter rows and columns\t");
	scanf("%d%d",&b,&c);
	int a[b][c];
 
	printf("Enter elements of %d*%d matrix\n",b,c);
		for(i=0;i<b;i++)
	{
		for(j=0;j<c;j++)
		scanf("%d",&a[i][j]);
	}
	printf("\n\nthe matrix form are listed below\n");
	for(i=0;i<b;i++)
	{
		for(j=0;j<c;j++)
		printf("%d\t",a[i][j]);			
		printf("\n");
	}
	return 0;
}

