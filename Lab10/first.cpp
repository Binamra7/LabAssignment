#include<stdio.h>
#include<conio.h>

void sumOfRows(int a[100][100],int x,int y)
{
    int sum=0;
    //finds the sum of each rows
    for(int i=0;i<x;i++)
    {
        for (int j = 0;j<y;j++)
        {
            sum+=a[i][j];
        }
    }
    //prints the matrix
    printf("The matrix is:\n");
    for(int i=0;i<x;i++)
    {
        for (int j = 0;j<y;j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    //prints the sum
    // for (int i = 0; i < x;i++)
        printf("sum=%d\n", sum);
    
}

int main()
{
    int n[100][100],row,col;
    printf("Enter number of rows:");
    scanf("%d", &row);
    printf("Enter number of column:");
    scanf("%d", &col);
    //input
    for (int i = 0; i < row;i++)
    {
       for (int j = 0; j < col;j++)
       {
           printf("Enter n[%d][%d]:", i, j);
           scanf("%d", &n[i][j]);
       }
    }
    sumOfRows(n, row, col);
    return 0;
}