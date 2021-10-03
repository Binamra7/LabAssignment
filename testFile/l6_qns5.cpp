#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[100],arr2[100],arr3[100],i,n,a,b,c,temp;
    printf("Enter the length of the arrays:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter %d no. of first array:",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf("Enter %d no. of second array:",i+1);
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<n;i++){
        arr3[i]=arr[i]+arr2[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr3[j]<arr3[i]){
                temp=arr3[i];
                arr3[i]=arr3[j];
                arr3[j]=temp;
            }

        }
    }
    printf("The sorted array is:\n");
    for(int i=0;i<n;i++){
        printf("%d\n",arr3[i]);
    }
   return 0;


}
