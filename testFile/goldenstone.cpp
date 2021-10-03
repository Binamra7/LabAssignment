#include <vector>
#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
#include <string>

using namespace std;

std::string who_is_next(const std::vector<std::string>& names, long long r) {
    int l=names.length();
    for(long long i=1;i<=r;i++){
        names.pop_front()
    }

}



int main()
{
    cout<<who_is_next({"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"},52);
    return 0;
}
