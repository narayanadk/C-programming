//Narayan Adhikari DJ1
//to enter number of days and convert it into years, months and days
#include<stdio.h>
int main()
{
int days,y,m,d,rd;
printf("Enter the days\t");
scanf("%d",&days);
y=days/365;
rd=days%365;
m=rd/30;
d=rd%30;
printf("Year=%d Month=%d Day=%d",y,m,d);
return 0; 
}
