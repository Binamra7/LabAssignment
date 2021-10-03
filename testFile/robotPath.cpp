#include<iostream>
#include<vector>
#include<cmath>
#include<bits/stdc++.h>
#include<string>

using namespace std;

int main()
{
    long long t,l,ph=pow(10,9),w[10000],h[10000],te;
    string input;
    char temp[10000];
    vector<char> a;
    cin>>t;
    for(int cases =1;cases<=t;cases++){
        cin>>input;
        l=input.length();
        for(int i=0;i<l;i++){
            temp[i]=input[i];
            a.push_back(temp[i]);
        }
        w[cases]=1,h[cases]=1;
        int mul=1,mul1=1,mul2=1,u=0,fac=1;
        for(int i=0;i<l;i++){
                switch(a[i]){
                    case '2':
                        fac=2;
                        mul*=fac;
                        break;
                    case'3':
                        fac=3;
                        mul*=fac;
                        break;
                    case')':
                        te=mul;
                        mul/=fac;
                        break;
                   case 'S':
                            h[cases]+=mul;
                            break;
                    case 'N':
                            h[cases]-=mul;
                            break;
                    case 'E':
                            w[cases]+=mul;
                            break;
                    case 'W':
                            w[cases]-=mul;
                            break;
                }
            if(h[cases]<=0)
                h[cases]=ph+h[cases];
            if(w[cases]<=0)
                w[cases]=ph+w[cases];
            if(h[cases]>ph)
                h[cases]=h[cases]-ph;
            if(w[cases]>ph)
                w[cases]=w[cases]-ph;
        }
        a.clear();
    }
    for(int i=1;i<=t;i++)
        printf("Case #%d: %d %d\n",i,w[i],h[i]);
    return 0;
}
