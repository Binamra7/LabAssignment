#include<stdio.h>
#include<conio.h>
#include<algorithm>

using namespace std;

int main()
{
    int findNum=8;
    int arr[]={3,5,2,6,7,8};
     int length=sizeof(arr)/sizeof(arr[0]);
    /*for(int i=0;i<length;i++){
        for(int j=i+1;j<length;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }*/
    sort(arr, arr + length);
    int low=0,hi=length;
    do{
        int mid=(low+hi)/2;
        if(findNum==arr[mid]){
            printf("%d found at array index %d",findNum,mid);
            break;
        }
        else if(arr[mid]>findNum){
            hi=mid;
        }
        else
            low=mid;
    }while(low<=hi);
    if(low>hi)
        printf("Not found");



    return 0;
}
