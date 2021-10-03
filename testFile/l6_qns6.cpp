#include<stdio.h>
#include<conio.h>

int main()
{
     int maxNum=0,arr[100],n;
    printf("Enter the length of the array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
            printf("Enter %d number:",i+1);
        scanf("%d",&arr[i]);
    }
    //maxNum=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>maxNum)
            maxNum=arr[i];
    }
    printf("The max number is:%d",maxNum);
    return 0;
}
