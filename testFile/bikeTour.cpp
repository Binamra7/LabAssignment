#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
    long long t,n,temp,peak[1000],d,sum,check[1000];
    vector<int> a,diff;
    cin>>t;
    for(int cases=1;cases<=t;cases++){
        cin>>n;
        temp=0;
        for(int i=0;i<n;i++){
            cin>>temp;
            a.push_back(temp);
        }
        for(int j=0;j<n-2;j++){
            if(a[j+1]>a[j]&&a[j+1]>a[j+2])
                check[cases]++;

        }
        diff.clear();
        a.clear();

    }
    for(int i=1;i<=t;i++)
        printf("Case #%d: %d\n",i,check[i]);
    return 0;
}
