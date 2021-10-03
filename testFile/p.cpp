#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<cstring>

using namespace std;

#include <string>
string factorial(int factorial){
      long long r=1;
      for(int i=1;i<=factorial;i++)
      {
          r=r*i;

      }
      return to_string(r);
}

int main()
{
    cout<<factorial(15);
    return 0;
}
