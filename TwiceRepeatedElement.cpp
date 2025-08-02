#include<bits/stdc++.h>
using namespace std;
int findRepeatedElement(vector<int>nums){
  int n=nums.size();
  for(int i=0;i<n;i++){
    int ind=abs(nums[i]);
    if(nums[ind]<0) {
      return ind;
    }
    else {
      nums[ind]=-1*nums[ind];
    }
  }
  return -1;
}
int main(){
  int n;
  cin>>n;
  vector<int>nums;
  while(n--){
    int ele;
    cin>>ele;
    nums.push_back(ele);
  }
  cout<<findRepeatedElement(nums)<<endl;
  return 0;
}
