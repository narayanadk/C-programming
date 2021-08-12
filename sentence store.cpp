#include <stdio.h>
int main()
{
	//gets()-scanf- to store string character
	//puts()-printf- to print string character
	char name[30],add[40],sec[10];
	printf("enter name\t");
	gets(name);
	printf("enter your address\t");
	gets(add);
	printf("enter your section\t");
	gets(sec);
	int roll;
	printf("enter your roll no\t");
	scanf("%d",&roll);
	printf("the given name is\t");
	puts(name);
	printf("address =\t");
	puts(add);
	printf("section =\t");
	puts(sec);
	printf("roll no. =\t%d",roll);
	return 0;
	
}
