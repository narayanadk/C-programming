#include <stdio.h>
int main()
{
	/*int i;
	char name[30];
	printf("Enter your name\t");
	gets(name);
	for(i=0;i<10;i++)
	{
	puts(name);
	}

	
	int i;
	char name[30];
	printf("Enter your name\t");
	gets(name);
	while(i<10)
	{
	puts(name);
	i++;// i+1	
	}*/
	int i;
	char name[30];
	printf("Enter your name\t");
	gets(name);
	do
	{
	puts(name);
	i++;
	}
	while(i<10);
	return 0;
}
