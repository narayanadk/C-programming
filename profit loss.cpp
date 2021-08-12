#include<stdio.h>
int main()
{
	float sp,cp,profit,loss;
	printf("enter cost price\t");
	scanf("%f",&cp);
	printf("enter selling price\t");
	scanf("%f",&sp);
	if(sp>cp)
	{
	profit=sp-cp;
	printf("%.4f is the profit amount",profit);
}
	else if(cp>sp)
	{
	loss=cp-sp;
	printf("%.4f is the loss amount",loss);
}
else
{
	printf("there is no loss or gain");
}
	return 0;
	
}
