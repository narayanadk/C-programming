#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	printf("enter two string\n");
	gets(a);
	gets(b);
	int v;
	v=strcmp(a,b);//compare strings
	if (v>0)
	{
		printf("string %s is greater",a);
	}
	else if (v<0)
	{
		printf("string %s is greater",b);
	}
	else
	{
		printf("both strings are same");
	}
	return 0;
}
