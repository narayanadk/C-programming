#include<stdio.h>
int main()
{
	int i,l;
	char a[30],ch;
	printf("enter the string   ");
	gets(a);
	for(l=0;a[l]!='\0';l++);	
	for(i=0;i<l/2;i++)
	{
		ch=a[i];
		a[i]=a[l-1-i];
		a[l-1-i]=ch;
	}
	printf("the reverse is %s",a);	
	return 0;
}

