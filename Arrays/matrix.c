#include <stdio.h>

int main() 
{
    int i,j,arr[100][100],row,column;
    scanf("%d\n",&row);
    scanf("%d",&column);
    for(i=0;i<column;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("Enter the element:");
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<column;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}