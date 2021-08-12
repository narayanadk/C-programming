#include<stdio.h>
int main()
{
	float s1,s2,s3,s4,s5;
	printf("enter marks of Math\t");
	scanf("%f",&s1);
	printf("enter marks of Computer\t");
	scanf("%f",&s2);
	printf("enter marks of Physics\t");
	scanf("%f",&s3);
	printf("enter marks of Chemistry\t");
	scanf("%f",&s4);
	printf("enter marks of English\t");
	scanf("%f",&s5);
	float total=s1+s2+s3+s4+s5;
	float p=(total/5)*100;
	printf("total marks= %f\n",total);
	printf("percentage = %f\n",p);
	if (s1>35 && s2>35 && s3>35 && s4>35 && s5>35)
	{
		if(p>=75)
		printf("Distinction");
		else if (p>=60 && p<75)
		printf("First Division");
		else if (p>=45 && p<60)
		printf("Second Division");
		else 
		printf("Third division");
	}
	else 
	printf("sorry you are failed");
	return 0;
}
