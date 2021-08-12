#include<stdio.h>
#include<string.h>
int main()
{
	char name[100],b[100];
	printf("enter any two string\t");
	gets(name);
	strcpy(b,name);// copy one string to another
	printf("\nthe copied string is %s",b);
	return 0;
}
