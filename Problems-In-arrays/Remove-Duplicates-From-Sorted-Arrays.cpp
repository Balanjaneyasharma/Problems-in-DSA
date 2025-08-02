#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>&nums){
  int n=nums.size();
  if(n==0) return 0;
  int i=0;
  for(int j=1;j<n;j++){
    if(nums[j]!=nums[i]){
      i++;
      nums[i]=nums[j];
    }
  }
  return i+1;
}
int main(){
  int n;
  cin>>n;
  int ele;
  while(n--){
    cin>>ele;
    vec.push_back(ele);
  }
  cout<<removeDuplicate(vec);
  return 0;
}
