/*

Given an array of integers nums, calculate the pivot index of this array.

The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to 
the sum of all the numbers strictly to the index's right.

If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. 
This also applies to the right edge of the array.

Return the leftmost pivot index. If no such index exists, return -1.

Input: nums = [1,7,3,6,5,6]
Output: 3
Explanation:
The pivot index is 3.
Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
Right sum = nums[4] + nums[5] = 5 + 6 = 11

*/

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>prefix;
        prefix.push_back(nums[0]);
        int n = nums.size();
        for(int i = 1 ; i < n ; i++){
            prefix.push_back(prefix[i-1] + nums[i]);
        }
        int r = nums.size()-1;
        for(int i = 0 ;i <= r ; i++){
            if(i == 0){
                if(prefix[r] == prefix[i]) return i;
            }
            else if(prefix[r]-prefix[i] == prefix[i-1]){
                return i;
            }
        }
        return -1; 
    }
};
