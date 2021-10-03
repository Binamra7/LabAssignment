#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
    int n,er,counter=0,temp,i;
    vector<int> arr;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<"Enter the number to erase: "<<endl;
    cin>>er;
    cout<<"Initial array:"<<endl;
    //cout<<arr[i]<<"\t";
    for(i=0;i<n;i++){
        if(er==arr[i]){
            arr.erase(i);
            counter++;
        }
    }
    while(counter!=0){
        arr.push_back(0);
        counter--;
    }
    cout<<"Final array"<<endl;
    for(i=0;i<n;i++)
        cout<<arr[i]<<"\t";
    return 0;
}
