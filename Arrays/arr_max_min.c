#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int i,max,min;
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for(i = 0; i < n; i++)
    {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }
    printf("Maximum element is %d\n", max);
    printf("Minimum element is %d\n", min);
    printf("Sum of maximum and minimum elements is %d\n", max + min);
    return 0;
}