#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main()
{
    vector<int> a(5);
    for(int i=0;i<5;i++){
            cout<<"Enter the number:";
        cin>>a[i];
    }
    a.push_back(10);
    sort(a.begin(),a.end());
    cout<<"The sorted form is:"<<endl;
    for(int j=0;j<a.size();j++){
        cout<<a[j]<<endl;
    }

    return 0;
}
