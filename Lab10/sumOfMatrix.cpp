#include<stdio.h>
#include<conio.h>

void sumOfRows(int a[100][100],int b[100][100],int x,int y)
{
    int sum[100][100];
    //finds the sum of each rows
    for(int i=0;i<x;i++)
    {
        for (int j = 0;j<y;j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    //prints the matrix
    printf("The first matrix is:\n");
    for(int i=0;i<x;i++)
    {
        for (int j = 0;j<y;j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    //prints second matrix
    printf("The second matrix is:\n");
    for(int i=0;i<x;i++)
    {
        for (int j = 0;j<y;j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    //prints the sum
    printf("The sum matrix is:\n");
    for (int i = 0; i < x;i++)
    {
        for (int j = 0; j < y;j++)
            printf("%d\t",sum[i][j]);
        printf("\n");
    }
}

int main()
{
    int n[100][100],m[100][100],row,col;
    printf("Enter number of rows:");
    scanf("%d", &row);
    printf("Enter number of column:");
    scanf("%d", &col);
    //input
    for (int i = 0; i < row;i++)
    {
       for (int j = 0; j < col;j++)
       {
           printf("(first matrix)Enter n[%d][%d]:", i, j);
           scanf("%d", &n[i][j]);
       }
    }
    
    for (int i = 0; i < row;i++)
    {
       for (int j = 0; j < col;j++)
       {
           printf("(second matrix)Enter n[%d][%d]:", i, j);
           scanf("%d", &m[i][j]);
       }
    }
    sumOfRows(n,m, row, col);
    return 0;
}