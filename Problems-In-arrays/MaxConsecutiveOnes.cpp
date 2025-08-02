#include<bits/stdc++.h>
using namepsace std;

int findMaxConsecutiveOnes(vector<int>&nums){
  int n=nums.size();
  int cnt=0,maxi=0;
  for(int i=0;i<n;i++){
    if(nums[i]==0) cnt++;
    else cnt=0;
    maxi=max(maxi,cnt);
  }
  return maxi;
}

int main(){
  cin>>n;
  int n;
  vector<int>nuns;
  while(n--){
    int ele;
    cin>>ele;
    nums.push_back(ele);
  }
  cout<<findMaxConsecutiveOnes(nums);
  return 0;
}   
