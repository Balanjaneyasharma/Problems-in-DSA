class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxi = 0.0;
        double sum = 0;
        for(int i = 0;i<k;i++){
            sum+=nums[i];
        }
        maxi = sum/k;
        for(int i = k;i<nums.size();i++){
            sum-=nums[i-k];
            sum+=nums[i];
            if(maxi<(sum/k)) maxi = sum/k;
        }
        return maxi;
        
    }
};
