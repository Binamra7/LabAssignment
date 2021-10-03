#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<cctype>

using namespace std;

int i;

string longest(string f, string s){
    string newStr="";
    int l1=f.length();
    int l2=s.length();
    int len;
    if(l1>l2)
        len=l1;
    else
        len=l2;
    for(i=0;i<len-1;i++){
        if(i>l1)
        {
            newStr+=s.substr(i,1);

        }
        else if(i>l2)
        {
            newStr+=f.substr(i,1);

        }
        else{
             if(f.substr(i,1)==s.substr(i,1)){
                        newStr+=s.substr(i,1);
                }
                    else if(f.substr(i,1)<s.substr(i,1)){
                        newStr+=f.substr(i,1)+s.substr(i,1);
                    }
                    else
                        newStr+=s.substr(i,1)+f.substr(i,1);
            }
    }
    cout<<i<<endl;
    cout<<"Without sort:"<<newStr<<endl;
    sort(newStr.begin(),newStr.end());
    cout<<"With sort:   "<<newStr<<endl;
    //removes duplicate
    for(int i=0;i<newStr.length();i++){
        for(int j=i+1;j<newStr.length();j++){
            if(newStr.substr(i,1)==newStr.substr(j,1)){
                newStr.erase(j,1);
                j--;
            }
        }
    }
    return newStr;
}

int main()
{
    //dotest("aretheyhere", "yestheyarehere", "aehrsty");
    //dotest("loopingisfunbutdangerous", "lessdangerousthancoding", "abcdefghilnoprstu")
    //inmanylanguages', 'theresapairoffunctions'), 'acefghilmnoprstuy'
    string req="acefghilmnoprstuy";
    //sort(req.begin(),req.end());
    string a="theresapairoffuntiocns";
    string b="inmanylanguages";
    string got =longest(a,b);
    cout<<"Final:       "<<got<<endl;
    cout<<"Required:    "<<req<<endl;
    if(got==req)
        cout<<"It is same";
    else
        cout<<"It is not same";
    return 0;
}
