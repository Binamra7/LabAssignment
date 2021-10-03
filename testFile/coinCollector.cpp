#include<vector>
#include<cmath>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

/*
2
3
1 2 5
3 6 1
12 2 7
5
0 0 0 0 0
1 1 1 1 0
2 2 2 8 0
1 1 1 0 0
0 0 0 0 0
*/
int i;

int main()
{
    int t,w,n,x,b,g[100];
    vector<int> totCoin;
    int a[100][100];
    cin>>t;
    for(i=0;i<t;i++){
            g[i]=0;
            cin>>n;
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    cin>>a[j][k];
                }
            }
           //totCoin[i]=0;
           int sum=0;
           for(int w=0;w<n;w++){
               for(int q=0;q<n-w;q++){
                        sum+=a[q][q+w];
                }
                    totCoin.push_back(sum);
                    sum=0;
           }
           sort(totCoin.begin(),totCoin.end());
           //for(int u=0;u<n;u++)
            //cout<<totCoin[u]<<"\n";
           g[i]=totCoin[n-1];
            totCoin.clear();
    }
    for(int i=0;i<t;i++){
        cout<<"Case #"<<i+1<<": "<<g[i]<<endl;
    }
    return 0;
}
