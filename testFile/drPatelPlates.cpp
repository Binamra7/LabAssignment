#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;
/*
2
2 4 5
10 10 100 30
80 50 10 50
3 2 3
80 80
15 50
20 10
*/

int main()
{
    int t,n,k,p,q,tot1=0,tot2=0,beauty[100],i,j,ini=0;
    int arr[200][200];
    cin>>t;
    for(int cases=1;cases<=t;cases++){
        cin>>n>>k>>p;
        for(i=0;i<n;i++){
            for(j=0;j<k;j++){
                cin>>arr[i][j];
            }
        }
        beauty[cases]=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<k;j++){
                    if(ini>=p)
                        break;
                if(tot1>tot2){
                    beauty[cases]+=arr[i][j];
                      tot2=arr[i][j+1];
                      j--;

                }
                else{
                    beauty[cases]+=arr[i+1][j];
                    tot1=arr[i][j];

                }
            }
        }
        ini=0;
        tot1=0;
        tot2=0;
    }
    for(int i=1;i<=t;i++)
    cout<<"Case #"<<i<<" :"<<beauty[i]<<endl;
    return 0;
}
