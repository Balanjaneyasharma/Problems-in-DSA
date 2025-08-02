class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> frequency;
        int ans = 0;
        for(auto it: nums){
            int c = k - it;
            if(frequency[c] > 0){
                ans++; 
                frequency[c]--;
            }
            else frequency[it]++;
        }
        return ans;
    }
};
