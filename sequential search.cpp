#include <stdio.h>
int main()
{
    int arr[100],n, i, a, c=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements in array: ");
    
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nEnter element to search: ");
    scanf("%d", &a);
    
    for(i=0; i<n; i++)
    {
        if(arr[i]==a)
        {
            c=1;
            break;
        }
    }
    if(c==1)
    {
        printf("\n%d is found at position %d", a, i + 1);
    }
    else
    {
        printf("\n%d is not found in the array", a);
    }
    return 0;
}
