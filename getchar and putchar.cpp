#include<stdio.h>
int main()
{
	//getchar()-scanf-store chatacter
	//putchar()-printf
	char a;
	printf("enter any character\t");
	a=getchar();
	printf("the character is\t");
	putchar(a);

	
//	char name[]={"Naryan Adhikari"};
//	printf("My name is %s",name);
	
	//cannot print after space 
/*	char name[30];
	printf("Enter your name");
	scanf("%s",name);
	printf("Your name is %s",name);
	*/
	return 0;
}
