#include<stdio.h>
int main()
{
    int array[5];
    for(int i=0;i<5;i++)
    {
        array[i]=i*10;
    }
    for(int i=0;i<5;i++)
    {
        printf("%d\n",array[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("%d\n",*(array+i));
    }
    int b=sizeof(array)/sizeof(int);
    printf("Size of array: %d\n",b);
    return 0;
}