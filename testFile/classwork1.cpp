#include<stdio.h>
#include<conio.h>

int main()
{
    int s[100],n,m,a[100][100];
    printf("Enter the dimension of the array:");
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
            s[i]=0;
        for(int j=0;j<m;j++){
            s[i]+=a[i][j];
        }
    }
    printf("the matrix is:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");

    }
    for(int i=0;i<n;i++){
            printf("\nThe sum of %d=%d\n",i+1,s[i]);
        }

    return 0;
}
