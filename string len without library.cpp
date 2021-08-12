#include<stdio.h>
int main()
{
	char a[100];
	int i;
	printf("enter any string  ");
	gets(a);
	for (i=0;a[i]!='\0';i++);
	printf("the length of string is %d",i);
	return 0;
}
