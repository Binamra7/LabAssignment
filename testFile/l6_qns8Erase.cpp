#include<stdio.h>
#include<conio.h>
#include<cmath>

int main()
{
    int arr[100],n,e;
    printf("Enter the length of the array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the number you want to erase:");
    scanf("%d",&e);
    for(int i=0;i<n;i++){
        if(arr[i]==e)
            arr[i]=0;

    }
    //swaping if zero is found
    for(int i=0;i<n;i++){
        if(arr[i]==0){
                int j=i;
            while(j<n){
                arr[j]=arr[j+1];
                j++;
            }
        }
    }

    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }

    return 0;
}
