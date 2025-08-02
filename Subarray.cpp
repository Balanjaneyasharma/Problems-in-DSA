class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       map<int,int>mpp;
        mpp[0]=1;
        int count=0,psum=0;
        for(int i=0;i<nums.size();i++){
            psum+=nums[i];
            if(mpp.find(psum-k)!=mpp.end()){
                count+=mpp[psum-k];
            }
            mpp[psum]+=1;
        }
        return count;
        
    }
};
