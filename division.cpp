#include<stdio.h>
int main()
{
	//%- remainder
	/*int a,b,rem,quo;
	printf("enter the numerator\t");
	scanf("%d",&a);
	printf("enter the denominator\t");
	scanf("%d",&b);
	quo=a/b;
	rem=a%b;
	printf("the quotient is %d\t\n",quo);
	printf("the remainder is %d\t",rem);

	int s,h,min,sec,r;
	printf("enter time in second\t");
	scanf("%d",&s);
	h=s/3600;
	r=s%3600;
	min=r/60;
	sec=r%60;
	printf("equivalent time = %d hours %d minutes %d seconds",h,min,min);
		*/
	//days into second
	int day;
    printf("enter days\t");
	scanf("%d",&day);
	int seconds=day*24*60*60;
	printf("%d days = %d Seconds",day,seconds);
	return 0;

}
