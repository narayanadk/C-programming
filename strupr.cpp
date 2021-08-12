#include<stdio.h>
#include<string.h>
int main()
{
	char name[100];
	printf("enter any string\t");
	gets(name);
	strupr(name);// change to uppercase 
	printf("\nthe uppercase of string is %s",name);
	return 0;
}
