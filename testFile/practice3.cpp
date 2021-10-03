#include<string>
#include<vector>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<bits/stdc++.h>
#include<sstream>

using namespace std;

std::vector<std::string> solution(const std::string &s)
{
    vector<string> a;
    int l=s.length();
    for(int i=0;i<l;i+=2){
        a.push_back(s.substr(i,2));

    }
    int len=l/2;
    if(l%2!=0){
        a[len]+="_";
    }
    int c=a.size();
    return a; // Your code here
}
int main()
{
    solution("HelloWorld");
    return 0;
}
