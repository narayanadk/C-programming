#include<stdio.h>
int main()
{
	char name[30];
	printf("enter your name\t");
	scanf("%s",name);
	char address[50];
	printf("enter your address\t");
	scanf("%s",address);
	int roll;
	printf("enter your roll no.\t");
	scanf("%d",&roll);
	printf("your name is %s\t\n",name);
	printf("your address is %s\t\n",address);
	printf("your roll no. is %d\t\n",roll);
	return 0;
	
}
