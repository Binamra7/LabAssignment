#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
#include<cmath>
#include<cstring>
#include<map>

#define ll long long

using namespace std;

std::string range_extraction(std::vector<int> args) {
    int c=0;
    vector<string> a,b;
    for(int i=0;i<args.size();i++){
            int z=i;
        if(args[i]+1!=args[i+1]){
            a.push_back(to_string(args[i]));
        }
        c=0;
        while(args[i]+1==args[i+1]){

                c++;
            b.push_back(to_string(args[i]));
            i++;
        }
        b.push_back(to_string(args[i]));
        if(b.size()>=3){
            string temp=b[0]+"-"+b[b.size()-1];
            a.push_back(temp);
        }
        else{
            i=z;
            a.push_back(to_string(args[i]));
        }
        b.clear();
    }
    for(int i=0;i<a.size();i++){
        if(a[i]==a[i+1])
           a.erase(a.begin()+i+1);
    }
    for(int i=0;i<a.size();++i){
        cout<<a[i]<<endl;
    }
    return "";

}

int main()
{
    range_extraction({-6, -3, -2, -1, 0, 1, 3, 4, 5, 7, 8, 9, 10, 11, 14, 15, 17, 18, 19, 20});
    return 0;
}
