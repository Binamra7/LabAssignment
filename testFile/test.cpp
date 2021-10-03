#include<iostream>
using namespace std;
#define sum 8;

void solve(int arr[]){
    int temp=0;
    for(int i=0;i<=5;i++){
            if((arr[i]+temp)==8){
                cout<<arr[i]<<"+"<<temp<<"="<<8<<"\n";
            }
            temp=arr[i];


    }
}

int main()
{

    int testArray[6]={2,1,7,4,4,6};
    solve(testArray);
    return 0;
}
