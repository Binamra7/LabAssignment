#include<stdio.h>
#include<conio.h>

void arrSum(int a[],int x)
{
    for (int i = 0; i < x;i++)
    {
        for(int j=i+1;j<x;j++){
            
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("nThe sorted array is:\n");
    for (int i = 0; i < x;i++)
    {
        printf("%d\n", a[i]);
    }
}

int main()
{
    int n,testArray[100];
    printf("Enter the size of array:");
    scanf("%d", &n);
    for (int i = 0; i < n;i++)
    {
        printf("Enter %d item:", i + 1);
        scanf("%d", &testArray[i]);
    }
    arrSum(testArray,n);
    return 0;
}