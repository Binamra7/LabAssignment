#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[10]={3,5,5,9,5,1,4,8,5,6},n,count=0,j;
    printf("Enter the number you want to erase:");
    scanf("%d",&n);

    //finds the input number and changes to zero
    for(int i=0;i<10;i++){
        if(arr[i]==n){
            arr[i]=0;
            count++;
            for(int k=i;k<10;k++){
                if(arr[k]==0){
                    int j=k;
                    while(j<10){
                        int temp=arr[j];
                        arr[j]=arr[j+1];
                        arr[j]=temp;
                        j+=2;
                    }
                }
            }
        }
    }
    //shifts the array elements if zero is found

    /*for(int i=0;i<n;i++){
        if(arr[i]==0){
                int temp=arr[10-count];
            arr[10-count]=0;

        }

    }*/
    //changes the last (count) elements to zero
    /*while(count!=0){
        arr[10-count]=0;
        count--;
    }*/
    //output
    for(int i=0;i<10;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
