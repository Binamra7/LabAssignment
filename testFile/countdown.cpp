#include<iostream>
#include<vector>

using namespace std;

int main()
{
    long long t,n,k,temp,num,ans[10000];
    vector<int> a,b;
    cin>>t;
    for(int cases=1;cases<=t;cases++){
        cin>>n>>k;
        for(int i=0;i<n;i++){
            cin>>temp;
            a.push_back(temp);
        }
        ans[cases]=0;
        //processing
        for(int i=0;i<n;i++){
                if(i+k>=n)
                break;
                num=0;
            for(int j=i;j<k+i;j++){
                if(a[j]-a[j+1]==1)
                num++;
            }
            if(num==k-1){
                ans[cases]++;
                i+=k;
            }
        }
        a.clear();
    }
    //output
    for(int i=1;i<=t;i++)
        printf("Case #%d: %d\n",i,ans[i]);
}
