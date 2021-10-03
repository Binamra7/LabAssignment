#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
/*
2
10
125
*/

int main()
{
    int g,t,k=0;
    vector<int> a;
    cin>>t;
    for(int cases=1;cases<=t;cases++){
        cin>>g;
        for(int i=1;i<=g;i++){
            a.push_back(i);
        }
        int value=0;
        for(int i=0;i<g;i++){
            for(int j=i;j<g;j++){
                k+=a[j];
                if(k==g){
                    value++;
                    break;
                }

            }
            k=0;
        }
        cout<<"Case #"<<cases<<": "<<value<<endl;
        a.clear();

    }
    //for(int i=1;i<=t;i++)

    return 0;
}
