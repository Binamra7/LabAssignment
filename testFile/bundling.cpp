#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,k,s[100];
    string a[100][100];
    string temp[100];
    cin>>t;
    for(int cases=1;cases<=t;cases++){
        cin>>n>>k;
        for(int i=0;i<n;i++){
            cin>>temp[i];
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                    a[i][j]="";
                for(int l=1;l<temp[i].length();l++){
                    if(temp[i].substr(0,l)!=temp[j].substr(0,l)){
                        break;
                    }

                    s[i]=l;
                }
                    a[i][j]=temp[i];

            }
        }
        for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
                for(int j=0;j<sizeof(a[i])/sizeof(a[i][0]);j++)
                cout<<a[i][j]<<" ";
        cout<<endl;
    }
    }
    return 0;
}
