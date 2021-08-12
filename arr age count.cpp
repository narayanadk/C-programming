#include<stdio.h>
int main()
{
    int i,age[100],c=0;
    printf("\nEnter age of 100 people :");
    for (i=0;i<100;i++)
	{
        scanf("%d",&age[i]);
    }

    for (i=0;i<100;i++)
    {
        if(age[i]>50 && age[i]<60)
        c=c+1;
    }

    printf("\n\nNumber of persons whose age between 50-60 are :: %d",c);
    return 0;
}
