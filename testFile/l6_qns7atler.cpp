#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[10],i,j,sum=10;
    for(i=0;i<10;i++){
            printf("Enter %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if((arr[i]+arr[j]==sum))
                printf("%d + %d =%d\n",arr[i],arr[j],sum);
        }
    }
    return 0;
}

