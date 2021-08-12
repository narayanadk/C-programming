#include<stdio.h>
int main()
{
 int num1,num2,sum,diff,pro,choice;
  printf("Enter two numbers ");
 scanf("%d%d",&num1,&num2);
 printf("Menu");
 printf("Press 1 for Sum\n");
 printf("Press 2 for Difference\n");
 printf("Press 3 for Product\n");

 printf("Enter your choice ");
 scanf("%d",&choice);
switch(choice)
{
 case 1:
 sum=num1+num2;
 printf("%d + %d =%d ",num1,num2,sum);
 break;
 case 2:
 diff=num1-num2;
 printf("%d - %d =%d ",num1,num2,diff);
 break;
 case 3:
 pro=num1*num2;
 printf("%d * %d =%d ",num1,num2,pro);
 break;
 default:
 printf("Enter the numbers between 1 to 3");
}
 return 0;
}

