class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        while(low<=high)
        {
            int mid=(low+high)>>1;
            if(nums[mid]==target)
            {
                return mid;
            }
            if(nums[mid]<nums[0])//part-2
            {
                if(target>=nums[0]||target<nums[mid])
                {
                    high=mid-1;
                }
                else
                {
                    low=mid+1;
                }
            }
            else//part-1
            {
                if(target>nums[mid] || target<nums[0])
                {
                    low=mid+1;
                }
                else
                {
                    high=mid-1;
                }
            }
            
        }
       
       return -1; 
    }
};
