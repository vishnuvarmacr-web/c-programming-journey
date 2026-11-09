#include<stdio.h>
int main()
{
    int a[100];
    int i,n,sum=0;
    printf("Enter the Number:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the Element:\n");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    printf("Sum of the Elements is: %d\n",sum);
    return 0;
}
