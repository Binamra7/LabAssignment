#include<stdio.h>
#include<conio.h>

int main()
{
    printf("Enter the order of the matrix:");
    int n,m,a[100][100];
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("Enter the a[%d][%d] element:",i,j);
            scanf("%d",&a[i][j]);
        }

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
