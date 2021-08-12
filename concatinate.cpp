#include<stdio.h>
int main()
{
	int i,l;
	char a[30],ch[30];
	printf("please enter your name");
	gets(a);
	printf("enter another string");
	gets(ch);
	for(l=0;a[l]!='\0';l++);
	for(i=0;ch[i]!='\0';i++)
	{
		a[l+i]=ch[i];
		
	}
	a[l+1]='/0';
	
	
	printf("the concatinate is %s",a);
	
	return 0;
}

