#include<stdio.h>
#include<conio.h>

int main()
{
    int a[10][10],b[10][10],n,m,sum;
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
                sum=0;
            for(int j=0;j<m;j++){
                sum+=a[j][j];
            }
         }

            printf("sum of diagonal=%d\n",sum);

    return 0;
}

