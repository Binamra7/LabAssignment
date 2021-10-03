#include<vector>
#include<iostream>

using namespace std;

int main()
{
    vector<int> a{1,2,3,4,5};
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<endl;
    }
    a.push_back(6);
     for(int i=0;i<a.size();i++){
        cout<<a[i]<<endl;
    }
    int t=a.back();
    cout<<t;
    a.pop_back();
     for(int i=0;i<a.size();i++){
        cout<<a[i]<<endl;
    }
    return 0;
}
