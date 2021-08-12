/* C Program to find Sum of Even Numbers in an Array */
#include<stdio.h>
 
int main()
{
 int n,i,a[100];
 int Sum=0;
 
 printf("\n Please Enter the Size of an Array : ");
 scanf("%d", &n);
 
 printf("\nPlease Enter the Array Elements\n");
 for(i = 0; i < n; i++)
 {
      scanf("%d", &a[i]);
 }
  
 for(i = 0; i < n; i ++)
 {
   if(a[i] % 2 == 0)
   {
 	Sum = Sum + a[i];
   }
   
 }
  
 printf("\n The Sum of Even Numbers in this Array = %d ",Sum);
 return 0;
}
