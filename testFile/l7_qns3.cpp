#include<stdio.h>
#include<conio.h>

int main()
{
    int a[10][10],b[10][10],n,m;
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
     printf("The transpose matrix is:\n");
    // if(n==m){
         for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                printf("%d\t",a[j][i]);
            }
            printf("\n");
         }

        /*for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
            printf("%d\t",b[i][j]);

            }
        printf("\n");
        }*/
    return 0;
}
