class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int,int>mpp;
        for(auto it: nums){
            mpp[it]+=1;
        }
        
        for(auto it : mpp){
            if(it.second&1) return false;
        }
        
        return true;
    }
};

// without using extra space ......

class Solution {
public:
    bool divideArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        for(int i = 1 ; i < nums.size() ; i +=2){
            if(nums[i]!=nums[i-1]) return false;
        }
        
        return true;
    }
};
