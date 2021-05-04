#include<stdio.h>
int main ()
{
    int num,row,col;
    scanf("%d\n",&num);
    int arr[num][num];
    for (row=0; row<num; row++)
    {
        for (col=0; col<num; col++)
        {
            scanf("%d",&arr[row][col]);
        }
    }
    for (row=0; row<num; row++)
    {
        for (col=0; col<num; col++)
        {
            printf("%d ",arr[col][row]);
        }
        printf("\n");
    }
    return 0;
}
