#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<bits/stdc++.h>
#include<cctype>

using namespace std;

int main()
{
    vector<int> n;
    int i,a=0,count=0,var;
    cin>>i;
    for(int j=0;j<i;j++){
        cin>>var;
        n.push_back(var);
        //a+=n[j];
    }
    sort(n.begin(),n.end());
   /* for(int x=0;x<i;x++){
        for(int y=x+1;y<i;y++){
            if(n[x]>n[y])
                swap(n[x],n[y]);
        }
    }*/
    for(int j=0;j<i;j++)
        cout<<n[j]<<"\t";
    cout<<endl;

    for(int k=i-1;k>0;k--){
            a+=n[k];
        if(a>=0)
            count++;
    }
    cout<<count;

    return 0;
}
