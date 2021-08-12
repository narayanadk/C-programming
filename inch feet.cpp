#include<stdio.h>
int main()
{ 
int feet1,feet2,feet3,newfeet,inch1,inch2,inch3,newinch;
printf("Enter feet1,feet2,inch1 and inch2");
scanf("%d,%d,%d,%d",&feet1,&feet2,&inch1,&inch2);
feet3=feet1+feet2;
inch3=inch1+inch2;
newfeet=inch3/12+feet3;
newinch=inch3%12;
printf("Feet=%d Inch=%d",newfeet,newinch);
return 0;
}
