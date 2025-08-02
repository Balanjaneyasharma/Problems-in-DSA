#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>res;
        map<int,bool>mpp;
        for(int i=0;i<nums1.size();i++){
            mpp[nums1[i]]=true;
        }
        for(int i=0;i<nums2.size();i++){
            if(mpp[nums2[i]]==true){
                res.insert(nums2[i]);
            }
        }
        for(auto it: res){
            cout<<it<<" ";
        }
        vector<int>ans(res.begin(),res.end());
        return ans;
        
    }
};
int main(){
  vector<int>v1;
  vector<int>v2;
  vector<int>result=intersection(v1,v2);
  return 0;
}
