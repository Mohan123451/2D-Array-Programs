#include<stdio.h>
int main ()
{
    int num,i,j,sum=0;
    scanf("%d",&num);
    int arr[num][num];
    for (i=0; i<num; i++)
    {
        for (j=0; j<num; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for (i=0; i<num; i++)
    {
        for (j=0; j<=i; j++)
        {
            sum = sum + arr[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}
