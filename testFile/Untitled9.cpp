#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> a;
    for(int i=3;i>=-3;i--){
        a.push_back(i);
    }
    cout<<endl;
    for(int i=0;i<=6;i++)
        cout<<a[i]<<"\t";
    cout<<endl;
    sort(a.begin(),a.end());
    //sort(a.begin(),a.end());
    for(int i=0;i<=6;i++)
        cout<<a[i]<<"\t";
    return 0;
}
