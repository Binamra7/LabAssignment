#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

/*
2
3 5
2 3 4
4 10
2 9 3 8
*/
int i;

int main()
{
        long long t,w,n,x,sum=0,b,count[1000];
    vector<int> a;
    //cout<<"Enter the number of test cases:\n";
    cin>>t;
    for(i=0;i<t;i++){
            count[i]=0;
        //cout<<"Enter w and n:\n";
        cin>>w>>n;
        for(int j=0;j<w;j++){
            //cout<<"Enter w elements:\n";
            cin>>b;
            a.push_back(b);
        }
        sort(a.begin(),a.end());
        int meanTerm=a[w/2];
        for(int k=0;k<w;k++){
            for(int l=k;l<w;l++){
                if(a[k]<meanTerm)
                {
                    a[k]++;
                    count[i]++;
                }
                else if(a[k]>meanTerm){
                    a[k]--;
                    count[i]++;
                }
                else{
                    int z=1;
                }
            }
        }
        a.clear();
    }
    for(int i=0;i<t;i++){
        cout<<"Case #"<<i+1<<": "<<count[i]<<endl;
    }
    return 0;
}
