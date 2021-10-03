#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[10],i;
    for(i=0;i<10;i++){
            printf("Enter %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    int low=0;
	int hi=10-1;
	while(low<hi){
        int comp=10-arr[low];
        if(comp==arr[hi]){
            printf("%d+%d=10\n",low,hi);
            hi--;
        }
        low++;
	}
    return 0;
}
