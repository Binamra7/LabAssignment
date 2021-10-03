/*#include<iostream>
#include<string>
#include<vector>
#include<bits/stdc++.h>
#include<cmath>
#include<cstring>
#include <boost/multiprecision/cpp_int.hpp>
#define ll long long

using namespace std;

int main()
{
    ll t,l,q=0,r,ans[100],f;
    vector<char> arr;
    cin>>t;
    for(int cases=1;cases<=t;cases++){
        cin>>l>>r;

        ans[cases]=0;
        for(int i=l;i<=r;i++){

            int a=i,b=1;
            string y=to_string(i);//123
            int len=y.length();

            for(int k=0;k<len;k++){
                arr.push_back(y[k]);
            }

            for(int j=0;j<len;j++){
                    int c=arr[j];
            //cout<<"c= "<<c<<"\t";
                if(c%2!=b%2)
                    break;
                b++;
                q++;
            }
            if(q==len)
                ans[cases]++;
                q=0;
            arr.clear();
        }
    }
    for(int i=1;i<=t;i++)
       cout<<"Case #"<<i<<": "<<ans[i]<<endl;
    return 0;
}*/
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;
ll five[20], pre[20];
int a[10] = {0, 0, 1, 1, 2, 2, 3, 3, 4, 4};
int b[10] = {0, 1, 1, 2, 2, 3, 3, 4, 4, 5};

class Solution {
  ll count(ll x) {
    string s = to_string(x);
    int n = s.size();
    ll ans = pre[n - 1];
    for (int i = 1; i <= n; ++i) {
      int c = s[i - 1] - '0';
      if (c % 2 != i % 2) {
        ans += five[n - i] * b[c];
        break;
      } else {
        ans += five[n - i] * a[c];
        if (i == n)
          ans++;
      }
    }
    return ans;
  }

public:
  void solve(int case_num) {
    cout << "Case #" << case_num << ": ";
    ll L, R;
    cin >> L >> R;
    cout << count(R) - count(L - 1) << endl;
  }
};

int main() {
  int t;
  cin >> t;
  five[0] = 1;
  for (int i = 1; i < 20; ++i)
    five[i] = five[i - 1] * 5;
  pre[0] = 0;
  for (int i = 1; i < 20; ++i)
    pre[i] = pre[i - 1] + five[i];
  for (int i = 1; i <= t; ++i) {
    Solution solution = Solution();
    solution.solve(i);
  }
}
