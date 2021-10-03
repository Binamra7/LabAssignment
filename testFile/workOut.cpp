#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
/*
3
5 2
10 13 15 16 17
5 6
9 10 20 26 30
8 3
1 2 3 4 5 6 7 10
1
3 1
100 200 230
3
5 2
10 13 15 16 17
5 6
9 10 20 26 30
8 3
1 2 3 4 5 6 7 10
*/

int main()
{
    int t,n,k,q,maxDiff=0,pos,added,value[100],i,j,d,ans[10];
    vector<int> time,session,diff;
    cin>>t;
    for(int cases=1;cases<=t;cases++){
        cin>>n>>k;
        for(int i=0;i<n;i++){
            cin>>q;
            time.push_back(q);
        }
        for(int test=1;test<=k;test++){
            for(int j=0;j<n+1+test;j++){
                d=time[j+1]-time[j];
                diff.push_back(d);
            }
            d=0;
            maxDiff=diff[0];
            pos=0;
            for(i=1;i<n;i++){
                    if(maxDiff<diff[i]){
                        maxDiff=diff[i];
                        pos=i;
                    }

            }
            //
            //cout<<"Max diff "<<maxDiff<<endl;
            added=maxDiff/2;
            //cout<<"added "<<added<<endl;
            //cout<<"position "<<pos<<endl;
            time.insert(time.begin()+pos+1,added+time[pos]);
            //cout<<"pos: "<<pos<<endl;
            for(int i=0;i<n+test;i++)
            //cout<<time[i]<<" ";
            //cout<<endl;
            if(k==1){
            if(time[pos+1]-time[pos]>time[pos+2]-time[pos+1])
                maxDiff=time[pos+1]-time[pos];
            else
                maxDiff=time[pos+2]-time[pos+1];
            added=0;
            }
            ans[cases]=maxDiff;
            diff.clear();
            maxDiff=0;
            n=sizeof(time)/sizeof(time[0]);
        }
            diff.clear();
            time.clear();


    }

    for(i=1;i<=t;i++)
        cout<<"Case #"<<i<<": "<<ans[i]<<endl;
    return 0;
}
