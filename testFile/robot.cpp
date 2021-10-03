#include<iostream>
#include<vector>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    vector<char> b,a;
    char temp[100];
    string input;
    cin>>input;
    int u=0;
    int l=input.length();
        for(int i=0;i<l;i++){
            temp[i]=input[i];
            a.push_back(temp[i]);
        }
        for(int i=0;i<l;i++){
            //cout<<a[i]<<" ";
            switch(a[i]){
            case 'N':
                b.push_back('N');
                  break;
            case 'E':
                b.push_back('E');
                break;
            case 'W':
                b.push_back('W');
                break;
            case 'S':
                b.push_back('S');
                break;
            case '(':
                u++;
                break;
            case ')':
                u++;
                break;
            case '2':
                u++;
                mul=2;
            }
        }
        for(int j=0;j<l-u;j++)
            cout<<b[j]<<" ";
    return 0;
}
