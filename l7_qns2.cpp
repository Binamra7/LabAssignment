#include<stdio.h>
#include<conio.h>

int main()
{
    char choose;
    printf("add of subtract:(a/s)");
    scanf("%c",&choose);
    int z=1;
    if(choose=='s'|| choose=='S')
        z=-1;
    printf("Enter the order of the matrix:");
    int n,m,a[100][100],b[100][100],s[100][100];
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("Enter a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("Enter the b[%d][%d] element:",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            s[i][j]=a[i][j]+z*(b[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d\t",s[i][j]);
        }
        printf("\n");
    }

    return 0;
}

