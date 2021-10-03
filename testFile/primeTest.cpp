#include<stdio.h>
#include<conio.h>

int main()
{
    int a[100],n;
    printf("Enter the length of the array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    }
    return 0;
}
