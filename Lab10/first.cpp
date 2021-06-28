#include<stdio.h>
#include<conio.h>

void sumOfRows(int a[100][100],int x)
{
    int sum[100];
    for(int i=0;i<x;i++)
    {
        sum[i] = 0;
        for (int j = 0;j<x;j++)
        {
            sum[i]+=a[i][j];
        }
    }
    printf("The matrix is:\n");
    for(int i=0;i<x;i++)
    {
        for (int j = 0;j<x;j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < x;i++)
        printf("Row %d sum=%d\n", i + 1, sum[i]);
}

int main()
{
    int n[100][100],dim;
    printf("Enter the dimension: ");
    scanf("%d", &dim);
    for (int i = 0; i < dim;i++)
    {
        for (int j = 0; j < dim;j++)
        {
            printf("Enter n[%d][%d]:", i, j);
            scanf("%d", &n[i][j]);
        }
    }
    sumOfRows(n, dim);
    return 0;
}