#include<stdio.h>
#include<string.h>
int main()
{
	char name[100];
	printf("enter any string\t");
	gets(name);
	strlwr(name);// change to lowercase 
	printf("\nthe lowercase of string is %s",name);
	return 0;
}
