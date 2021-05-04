#include<stdio.h>
int main ()
{
    int row,col,i,j;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    for(i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Upper Boundary:");
    for (i=0; i<row; i++)
    {
        printf("%d ",arr[0][i]);
    }
    printf("\nLower Boundary:");
    for (i=0; i<row; i++)
    {
        printf("%d ",arr[row-1][i]);
    }
    printf("\nLeft Boundary:");
    for (j=0; j<col; j++)
    {
        printf("%d ",arr[j][0]);
    }
    printf("\nRight Boundary:");
    for (j=0; j<col; j++)
    {
        printf("%d ",arr[j][col-1]);
    }
    return 0;
}
