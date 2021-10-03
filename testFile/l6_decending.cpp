#include<stdio.h>
#include<conio.h>

int main()
{
    int temp,arr[100],n;
    printf("Enter the length of the array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }

        }
    }
    printf("The sorted array is:\n");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
   return 0;
}

