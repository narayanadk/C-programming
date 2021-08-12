// strlen, strrev, strcpy, strcat, strlwr, strupr
#include<stdio.h>
#include<string.h>
int main()
{
	int len;
	char name[100];
	printf("enter any string\t");
	gets(name);
	len=strlen(name);// compute string length
	printf("the length of the string is %d",len);
	return 0;
}
