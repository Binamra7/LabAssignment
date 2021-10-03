#include<vector>
#include<cmath>
#include<algorithm>
#include<bits/stdc++.h>
#include<string>

using namespace std;
/*
3
AKICKSTARTPROBLEMNAMEDKICKSTART
STARTUNLUCKYKICK
KICKXKICKXSTARTXKICKXSTART
*/

int main()
{
    int t,count,ans[100];
    string lucky,test="",test2="";
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>lucky;
        int len=lucky.length();
        for(int i=0;i<len;i++){
            test=lucky.substr(i,4);
            if(test=="KICK")
               {
                   for(int j=i+4;j<len;j++){
                    test2=lucky.substr(j,5);
                    if(test2=="START")
                        count++;
                   }
               }
        }
        ans[i]=count;
        count=0;
    }
    for(int i=0;i<t;i++){
        cout<<"Case #"<<i+1<<": "<<ans[i]<<endl;
    }
    return 0;
}

