#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<bits/stdc++.h>
#include<cctype>

using namespace std;

int main()
{
    vector<int> a(6);
    //array input
    for(int i=0;i<6;i++){
            //cout<<"Enter the "<<i+1<<" element:";
            cin>>a[i];
        //a[i]=i+1;
    }
    //original input
    cout<<"Original array is:\n";
    for(int i=0;i<6;i++){
        cout<<a[i]<<"\t";
    }
    cout<<endl;
    //process
    int t=0;
    for(int i=0;i<6;i++){
        int test=(a[i-1]+a[i+1])/2;
        if(a[i]==test){
            swap(a[i],a[i-1]);
        }
    }


    //result array
    cout<<"Final array is:\n";
    for(int i=0;i<6;i++){
        cout<<a[i]<<"\t";
    }
    return 0;
}
