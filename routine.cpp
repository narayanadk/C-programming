#include<stdio.h>
int main()
{
	int a;
	printf("enter the period number\t");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("Subject= English \n Teacher= RC");
			break;
		case 2:
			printf("Subject= Chemistry \n Teacher= BRS");
			break;
		case 3:
			printf("Subject= Math \n Teacher= RP");
			break;
		case 4:
			printf("Subject= Computer \n Teacher= BG");
			break;
		case 5:
			printf("Subject= Physics \n Teacher= RB");
			break;
		case 6:
			printf("Subject= Math \n Teacher= KM");
			break;
		case 7:
			printf("Subject= Nepali \n Teacher= GL");
			break;
		case 8:
			printf("Subject= Physics \n Teacher= SP");
			break;
		default:
			printf("invalid entry");
			break;
	}
	return 0;
}

