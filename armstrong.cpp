#include<stdio.h>
#include<math.h>
int main()
{
	int n,sum=0,rem,m;
    printf("Enter an integer: ");
    scanf("%d", &n);
    m=n;
    while(n!=0)
	{
        rem=n%10;
        sum=sum+pow(rem,3);
        n=n/10;
    }
    if(m==sum)
    printf("the number is armstrong");
    else
    printf("the number is not armstrong");
    return 0;
}
