#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<sstream>

using namespace std;

int main()
{
    int t,w,h,l,u,r,d;
    string a[100][100];
    //cin>>t;
    //for(int cases=1;cases<=t;cases++){
        cin>>w>>h>>l>>u>>r>>d;
        for(int i=1;i<=w;i++){
            for(int j=1;j<=h;j++){
                    a[i][j]="1";
            }
        }
        for(int i=u;i<=d;i++){
            for(int j=l;j<=r;j++){
                a[i][j]="0";
            }
        }
        a[w][h]="X";

        for(int i=1;i<=w;i++){
            for(int j=1;j<=h;j++){
                    cout<<a[i][j];
            }
            cout<<endl;
        }


    //}
    return 0;
}
