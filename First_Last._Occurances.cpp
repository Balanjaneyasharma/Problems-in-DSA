class Solution {
public:
    int firstPos(vector<int>& nums,int target){
        int start=0,end=nums.size()-1,ans=-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]==target){
                ans=mid;
                end=mid-1;
            }
            else if(nums[mid]>target){
                end--;
            }
            else{
                start++;
            }
        }
        return ans;
    }
    int lastPos(vector<int>& nums,int target){
        int start=0,end=nums.size()-1,ans=-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]==target){
                ans=mid;
                start=mid+1;
            }
            else if(nums[mid]>target){
                end--;
            }
            else{
                start++;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int first=firstPos(nums,target);
        int last=lastPos(nums,target);
        ans.push_back(first);
        ans.push_back(last);
        return ans;
        
        
        
    }
};
