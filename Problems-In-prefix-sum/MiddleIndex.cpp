class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
       
int sum=0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
        }
        int sumleft = 0;
        for(int i=0; i<nums.size(); i++){
            int sumright = sum - sumleft - nums[i];
            if(sumleft == sumright){
                return i;
            }
            sumleft += nums[i]; 
        }
        return -1;
    }
};
