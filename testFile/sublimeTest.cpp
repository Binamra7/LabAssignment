#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<cmath>

using namespace std;

int main()
{
    long n,q,t,s[105],beg,en;
    long temp;
    char ope[1000];
    int cmd[1000][2];
    std::vector<long> a;
    cin>>t;
    for(int cases=1;cases<=t;cases++)
    {
        cin>>n>>q;
        for(int i=0;i<n;i++){
            cin>>temp;
            a.push_back(temp);
        }
        for(int i=0;i<q;i++){
            cin>>ope[i];
            for(int j=0;j<2;j++){
                cin>>cmd[i][j];
            }
        }
        //processing
        s[cases]=0;
        for(int r=0;r<q;r++){

            if(ope[r]=='U'){
                a[cmd[r][0]-1]=cmd[r][1];
                //for(int i=0;i<n;i++)
                //cout<<"\nupdate="<<a[i];
            }
            if(ope[r]=='Q'){
                beg=cmd[r][0]-1;
                en=cmd[r][1]-1;
                int fac=1,c=1;
                for(int i=beg;i<=en;i++)
                {
                    if(fac%2==0)
                        c=-1;
                    else
                        c=1;
                    s[cases]+=a[i]*fac*c;
                    fac++;
                    //cout<<"\ns case "<<s[cases];
                }

            }
        }
        a.clear();
    }
    for(int i=1;i<=t;i++)
        printf("Case #%d: %d\n",i,s[i]);
}
