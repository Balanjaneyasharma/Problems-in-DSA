class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int actual_sum=n*(n+1)/2;
        int total_sum=0;
        for(auto it:nums){
            total_sum+=it;
        }
        return actual_sum-total_sum;
    }
};
