#include<stdio.h>
#include<string.h>
int main()
{
	char name[100],b[100];
	printf("enter any two string\t");
	gets(name);
	gets(b);
	strcat(name,b);// join two string
	printf("\nthe combined string is %s",name);
	return 0;
}
