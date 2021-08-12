#include<stdio.h>
#include<math.h>
int main()
{
	/*int a;
	printf("the natural numbers are\n");
	for(a=1;a<=50;a++)
	{
		printf("%d\n",a);
	}

	int i,a,c;
	for(i=1;i<=10;i++)
	{
		c=pow(a,2);
		printf("%d\n",c);
		a=a+1;	
		
		 int i=1,a=5;
 do
 {
 printf("%d\t",a);
 a=a+4;
 i++;
 }
// while(i<=10);*/
int a=1,b=a,c;

printf("\nFibonacci series::\n");
    for (int i=1;i<=20;i=i+2)
    {
    printf("%d\n",a);
    c=a+b;
    a=b;
    b=c;
    }

	return 0;
}
