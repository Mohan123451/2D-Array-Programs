#include<stdio.h>
int main ()
{
    int row,col,i,j,flag =0;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int start = arr[0][0];
    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            if (i == j)
            {
                if (arr[i][j] != start)
                {
                    flag =1;
                    break;
                }
            }
            else
            {
                if (arr[i][j] != 0)
                {
                    flag =1;
                    break;
                }
            }
        }
    }
    if (flag ==1)
    {
        printf("Not a Scalar matrix");
    }
    else
    {
        printf("Scalar matrix");
    }
    return 0;
}
