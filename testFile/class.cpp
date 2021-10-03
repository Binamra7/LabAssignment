#include<stdio.h>
#include<conio.h>

int main()
{
clrscr();
int arr[5],p=0,n=0,e=0,o=0;
    for(int i=0;i<=4;i++){
        printf("enter numbers: ");
        scanf("%d",&uarray[i]);
    if(uarray[i]<0)
        n++;
    else if(uarray[i]>0)
        p++;

    if(uarray[i]%2==0)
        e++;
    else if(uarray[i]%2!=0)
        o++;
    }
printf("positive no:=%d\nnegative no.=%d\teven no. =%d\todd no. =%d",p,n,e,o);
return 0;
}
}
