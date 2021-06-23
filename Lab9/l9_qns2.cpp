#include<stdio.h>
#include<conio.h>

float avg()
{
    int a[5];
    for(int i=0;i<5;i++){
      printf("Enter %d num: ",i+1);
      scanf("%d",&a[i]);
    }
    int sum=0;
    for(int i=0;i<5;++i){
        sum+=a[i];
    }
    return sum/5;
}

int main()
{
    printf("%f",avg());
    return 0;
}
