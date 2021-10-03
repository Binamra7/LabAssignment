//time complezity=O(n)
//testLimit=100
//memory size=1gb

#include<iostream>
#include<cmath>
#include<algorithm>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

int sort(int arr,int a)
{
    for(int i=0;i<a;i++){
        for(int j=i+1;j<a;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    return arr;
}

int main()
{
	int sum=7;
	int testArray1[]={0,4,7,3};

	//int testArray2[]={1,4,6,7};
	//for 1st array
	int n=sizeof(testArray1)/sizeof(testArray1[0]);
	testArray1[n]=sort(testArray1[n],n);
	int low=0;
	int hi=n-1;
	while(low<hi){
        int comp=7-testArray1[low];
        if(comp==testArray1[hi]){
            cout<<testArray1[low]<<"+"<<testArray1[hi]<<"="<<sum<<endl;
            hi--;
        }
        low++;
	}
	return 0;
}
