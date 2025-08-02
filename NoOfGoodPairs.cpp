/*
Given an array of integers nums, return the number of good pairs.

A pair (i, j) is called good if nums[i] == nums[j] and i < j.
*/
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int freq[101];
        for(int i=0;i<101;i++) freq[i]=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            count+=freq[nums[i]]++;
        }
        return count;
    }
};
