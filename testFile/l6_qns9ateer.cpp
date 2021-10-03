#include<stdio.h>
#include<conio.h>

int main()
{
    int n,arr[100],er,counter=0;
    printf("Enter the length of array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to erase:");
    scanf("%d",&er);
    for(int i=0;i<n;i++){
        if(arr[i]==er){
            counter++;
            if(i<n){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                i++;

            }
            /*for(int j=i;j<n;j++){
                for(int k=j;k<n;k++){
                        int temp=arr[k];
                        arr[k]=arr[j];
                        arr[j]=temp;
                }
            }*/
        }
        else
            int b=0;
    }
    printf("%d",counter);
    while(counter!=0){
        arr[n-counter]=0;
        counter--;
    }
    for(int s=0;s<n;s++)
        printf("%d\t",arr[s]);


    return 0;
}
