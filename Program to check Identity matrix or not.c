#include<stdio.h>
int main ()
{
    int num,i,j,flag =0;
    scanf("%d",&num);
    int arr[num][num];
    for(i=0; i<num; i++)
    {
        for (j=0; j<num; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for (i=0; i<num; i++)
    {
        for(j=0; j<num; j++)
        {
            if (i == j)
            {
                if (arr[i][j] != 1)
                {
                    flag=1;
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
    if (flag == 1)
    {
        printf("Not an Identity matrix");
    }
    else
    {
        printf("Identity matrix");
    }
    return 0;

}
