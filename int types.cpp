#include<stdio.h>
int main()
{
	// %ld for long int; lld for long long int
	// %u for unsigned int 
	char name[30],add[40];
	printf("enter name\t");
	gets(name);
	printf("enter your address\t");
	gets(add);
	long int sal;
	printf("enter salary\t");
	scanf("%ld",&sal);
	long long int con;
	printf("enter contact no.\t");
	scanf("%lld",&con);
	printf("name =\t");
	puts(name);
	printf("address =\t");
	puts(add);
	printf("salary = %ld\t\n",sal);
	printf("contact no. is %lld\t\n",con);
	return 0;
	
}
