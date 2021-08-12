#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	printf("enter the string\n");
	gets(a);
	strcpy(b,a);
	if(strcmp(a,strrev(b))==0)
	{
		printf("\nthe string is palindrome\n");
	}
	else
	{
		printf("\nthe string is not palindrome\n");
	}
	return 0;
}
