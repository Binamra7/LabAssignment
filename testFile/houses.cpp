#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
    long long t,n,b,cost=0,ini=0,maxHouse[1000],q;
    vector<int> arr;
    cin>>t;
    for(int cases=0;cases<t;cases++){
        cin>>n>>b;
        for(int i=0;i<n;i++){
            cin>>q;
            arr.push_back(q);
        }
        sort(arr.begin(),arr.end());
        maxHouse[cases]=0;
        for(int j=0;j<n;j++){
            cost+=arr[j];
            if(cost<=b)
                maxHouse[cases]++;
        }
        arr.clear();
        cost=0;
        ini=0;

    }
    for(int i=0;i<t;i++)
        cout<<"Case #"<<i+1<<": "<<maxHouse[i]<<endl;
    return 0;
}
