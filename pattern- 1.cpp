// 1     1
//   2 2
//    3
//  4  4
// 5     5
#include<stdio.h>
int main()
{
    int i,j,a=3,b=1,c=1,k;
    for(i=1;i<=5;i++)
    {
        if(i<=3)
        {
            printf("%d",i);
        for(j=i;j<=a;j++)
        {
            printf(" ");
        }
        if(i!=3)
        {
            printf("%d\n",i);
                for(j=i;j>=1;j--)
            {
            printf(" ");
            }
        }
        else
        printf("\n");
        a-=1;
        }
        else
        {
            for(k=1;k<=b;k++)
            {
                printf(" ");
            }
            printf("%d",i);
            for(k=1;k<=c;k++)
            {
            printf(" ");
            }
            printf("%d\n",i);
            b--;
            c+=2;
        }
    }
}
