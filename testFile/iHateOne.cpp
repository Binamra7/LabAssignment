#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<bits/stdc++.h>
#include<cctype>

using namespace std;



int main()
{
    int t,x;
    cin>>t;
    string ans[50];
    for(int i=0;i<t;i++){
            cin>>x;
            int a=x%10;
            x/=10;
            int b=x%10;
            if(a==b)
                ans[i]="Yes";
            else
                ans[i]="No";

    }
    for(int i=0;i<t;i++)
        cout<<ans[i]<<endl;

    return 0;
}
