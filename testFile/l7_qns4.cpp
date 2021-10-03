#include<stdio.h>
#include<conio.h>

int main()
{
    top:
    int n,m,a[100][100],b[100][100],p[100][100],x,y,t=0;
    printf("Enter the order of the first matrix:");
    scanf("%d%d",&n,&m);

    //input first matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("Enter a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }

    }

    //input second matrix
    printf("Enter the order of the second matrix:");
    scanf("%d%d",&x,&y);
    if(m!=x){
           // system("clear");
        printf("The multiplication is not possible.\nTry again\n");
        goto top;
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("Enter b[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }

    }


    //calculation
    for(int i=0;i<n;i++){
        for(int j=0;j<y;j++){
                p[i][j]=0;
            for(int k=0;k<m;k++){
                p[i][j]+=a[i][k]*b[k][j];
            }

    }
    }
    //prints first matriz
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d\t",a[i][j]);

        }
        printf("\n");
    }
    printf("\n");

    //prints second matrix
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("%d\t",b[i][j]);

        }
        printf("\n");
    }
    printf("\n");

    //prints the final result
    for(int i=0;i<n;i++){
        for(int j=0;j<y;j++){
            printf("%d\t",p[i][j]);

        }
        printf("\n");
    }

    return 0;
}

