#include<stdio.h>
int main()
{
    int a[10];
    int i,target,n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the target element: ");
    scanf("%d", &target);
    for(i=0;i<n;i++)
    {
        if(a[i]==target)
        {
            printf("Found");
            break;
        }
    }
    return 0;
}