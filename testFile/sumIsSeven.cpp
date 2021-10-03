/*
[2,3,4,5]
[1,4,6,7]   

sum=7*/

#include<iostream>
#include<cmath>
#include<algorithm>
#include<bits/stdc++.h>

int main()
{
	int sum=7;
	int testArray1={2,3,4,5};
	int testArray2={1,4,,6,7};
	//for 1st array
	int n=sizeof(testArray1)/sizeof(testArray1[0]
	for(int i=0;i<=n;i++)){
		for(int j=i+1;j<n;j++){
			if(testArray1[i]+testArray2==7)
				cout<<testArray1[i]<<"+"<<testArray1[j]<<"="<<sum<<enl;
		}
	}
	
	return 0;
}