#include<stdio.h>
int main()
{
	int n,rev=0,remainder,m;
    printf("Enter an integer: ");
    scanf("%d", &n);
    m=n;
    while(n!=0)
	{
        remainder=n%10;
        rev=rev*10+remainder;
        n=n/10;
    }
    if(m==rev)
    printf("the number is palindrome");
    else
    printf("the number is not palindrime");
    return 0;
}
