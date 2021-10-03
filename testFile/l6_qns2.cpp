#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[100],p=0,ne=0,e=0,o=0,n,i;
    printf("Enter the length of the array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
            printf("Enter arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]<0)
            ne++;
        else if(arr[i]>0)
            p++;

        if(arr[i]%2==0)
            e++;
        else if(arr[i]%2!=0)
            o++;
    }
    printf("positive no:=%d\nnegative no.=%d\neven no. =%d\nodd no. =%d",p,ne,e,o);
    return 0;
}

