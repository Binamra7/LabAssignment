#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main()

{
    string a;
    char arr[1000];
    getline(cin,a);
    int key=0;
    cin>>key;
    if(key<=0)
        return 0;
    for(int i=0;i<a.length();i++){
        if(a[i]>=65 && a[i]<=90){
                int k1=key;
            a[i]+=key;
            if(a[i]>90){
                k1=a[i]-90;
                cout<<k1;
                a[i]=65+k1-1;
            }
        }
        else if(a[i]>=97 && a[i]<=122){
            int k2=key;
            a[i]+=key;
            if(a[i]>122){
                k2=a[i]-122;
                cout<<k2;
                a[i]=97+k2-1;
            }
        }
        else
            continue;

    }
    for(int i=0;i<a.length();++i)
        cout<<a[i];
    return 0;

}
