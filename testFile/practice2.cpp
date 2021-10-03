 #include<iostream>
 #include<vector>
 #include<string>
 #include<bits/stdc++.h>

 //using namespace std;

int findOdd(const std::vector<int>& numbers){
  //your code here
  int l=numbers.size();
  int ans;
  int check[1000][2];
  std::vector<int> seen;
  for(int i=0;i<l;i++){
        check[i][1]=0;
     check[i][0]=numbers[i];

     for(int j=i+1;j<l;j++){

        if(numbers[i]==numbers[j])
            check[i][1]++;
     }
     check[i][1]++;
    }
    for(int i=0;i<l;i++){
            for(int j=i+1;j<l;j++){
        if(check[i][0]==check[j][0]){
            check[j][1]=0;
        }
            }
    }
    for(int i=0;i<l;i++)
    //printf("%d,%d\n",check[i][0],check[i][1]);

  for(int i=0;i<l;i++){
    if(check[i][1]%2!=0)
        ans=check[i][0];
  }
  return ans;
}

int main()
{
    int n;
    //std::vector<int> input{20,1,-1,2,-2,3,3,5,5,1,2,4,20,4,-1,-2,5};
    //std::vector<int> input{1,1,2,-2,5,2,4,4,-1,-2,5};
    //std::vector<int> input{10};
    //std::vector<int> input{-5, 6, 4, 4, 0, -8, 0, 6, 4, -5, 6, 4, -8, -8, -8, 6, 6, 4, 4, -8, 0, 6, 4, 3, 3, 4, -8, 0, -8, 3, 0, 6, 4, 6, -5, 3, -5, 4, -5, 0, -8};
    //std::vector<int> input{3,5,8,8,2,9,-2,7,-8,6,9,6,-7,6,5,-2,5,-8,-2,2,-4,-1,7, 3, -7, 3, -2, 2, -1, 8, 3, -2, 6, -4, -4, 5, 2, 8, 3, 5, -1, 9, 3, 9, -1, 8, -4, -2, 3, 7, -4, 7, 7, 3, 8, 8, 8, 2, 6, 7, 8, 9, 3, -1, 7, -1, -2, 8, 6, 7, 9, -4, 3, -8, 8, 8, 9, -4, 2, 8, 8, -1, 7, -4, -1, 8, -8, -1, 7, 9, 3, -4, 7, 3, -4, 7, -4, 6, 5, -4, 8, -1, -2};
    std::vector<int> input{3, -5, -1, 1, -1, -5, -4, 1, 3, 1, -5, -8, -9, -9, 7, 9, -5, -4, -9, 1, -4, 1, 7, 9, -2, -5, 1, 3, 7, -1, 3, -4, -1, 3, 1, 1, -9, -4, 9, 1, -5, 1, 3, -4, -5, -4, -9, -5, -5, 1, 9, 1, -9, 9, 1, -8, -4, 1, 1, -5, 9, -4, -1, 1, -1, 1, 6, -4, -9, 7, 6, -1, -1, 1, 6, 9, 9, -4, -9, 3, 1, -9, -5, 1, 7, -5, 3, -5, -4, -9, -5, -4, -4, 1, 7, 3, 3, -4, 1, -4, 6, -1, -1};
    std::cout<<findOdd(input);
    //std::cin>>n;
    return 0;
}
