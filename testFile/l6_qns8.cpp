#include<stdio.h>
#include<conio.h>

int main()
{
    int a[10][10],i,j,posSum=0,negSum=0,n,m;
    printf("Enter the dimensions:");
    scanf("%d%d",&n,&m);
    /*for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("Enter a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);

        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j]>=0)
                posSum+=a[i][j];
            else
                negSum+=a[i][j];
        }
    }*/
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("Enter a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("The positive sum=%d\nThe negative sum=%d",posSum,negSum);
    return 0;
}
