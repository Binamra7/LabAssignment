#include<stdio.h>
#include<conio.h>

int main()
{
    int a[10][10],b[10][10],n,m,sum[100];
    printf("Enter the order of matrix:");
    scanf("%d%d",&n,&m);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("Enter a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("The original matrix is:\n");

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d\t",a[i][j]);

        }
        printf("\n");
    }

         for(int i=0;i<n;i++){
                sum[i]=0;
            for(int j=0;j<m;j++){
                sum[i]+=a[i][j];
            }
         }
         for(int i=0;i<n;i++){
            printf("sum of row %d=%d\n",i+1,sum[i]);
         }
    return 0;
}
