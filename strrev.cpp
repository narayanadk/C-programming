#include<stdio.h>
#include<string.h>
int main()
{
	char name[100],rev[100];
	printf("enter any string\t");
	gets(name);
    	strrev(name);//reverse the string
	printf("\nthe reverse string is %s",name);
	return 0;
}
