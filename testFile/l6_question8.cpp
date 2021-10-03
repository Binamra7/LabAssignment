#include<stdio.h>
#include<conio.h>

int main(){

int uarr[10],unum,del,s,i;
printf("Enter no. of elements: ");
scanf("%d",&unum);
for(int i=0;i<unum;i++){
    printf("uarr[%d]= ",i);
    scanf("%d",&uarr[i]);
}
printf("Enter number to delete: ");
scanf("%d",&del);
printf("\n");

for(i=0;i<unum;i++){
  if(uarr[i]==del)
  uarr[i]=0;
}
for(i=0;i<unum;i++){
 for(int j=i+1;j<unum;j++){
    if(uarr[i]==0){
     s=uarr[i];
     uarr[i]=uarr[j];
     uarr[j]=s;
    }
 }
}
for(i=0;i<unum;i++){
  printf("%d\t",uarr[i]);
}
return 0;
}
