#include<vector>
#include<cmath>
#include<algorithm>
#include<bits/stdc++.h>
#include<string>

using namespace std;

/*
2
3
2 1 10
5
19 3 78 2 31
*/

int main()
{
    int t,n,num,points1=0,points2=0,finPoint=0;
    double score1[109];
    double score2[109];
    double scoreFin[109];
    vector<int> a;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>num;
            a.push_back(num);
        }
        score1[i]=0;
        score2[i]=0;
        scoreFin[i]=0;
        for(int k=0;k<n;k++){
                points1=0;
            if(k<n-1){
                points1=a[k]+a[k+1];
            score1[i]+=points1;
            a[k+1]+=a[k];
            }
        }/*
        for(int k=n-1;k>=0;k--){
            points2=a[k]+a[k-1];
            score2[i]+=points2;
            if(k!=0)
            a[k]+=a[k-1];
            a[k]=0;
        }
        //scoreFin[i]=(score1[i]+score2[i])/2;
        a.clear();*/
    }
    for(int i=0;i<t;i++){
        cout<<"Case #"<<i+1<<": "<<score1[i]<<endl;
    }
    return 0;
}
