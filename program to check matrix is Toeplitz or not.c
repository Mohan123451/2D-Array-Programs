#include<stdio.h>
int main ()
{
    int row,col,i,j,flag=0;
    scanf("%d %d\n",&row,&col);
    int arr[row][col];
    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int start = arr[0][0];
    for (i=1; i<row; i++)
    {
        if (arr[i][i] != start)
        flag = 1;
        break;
    }
    if (flag ==1)
    {
        printf("Not a Toeplitz matrix");
    }
    else
    {
        printf("Toeplitz matrix");
    }
    return 0;
}
