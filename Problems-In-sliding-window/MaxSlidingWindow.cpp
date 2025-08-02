class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque < int > dq;
        vector < int > ans;
        for (int i = 0; i < nums.size(); i++) {
            if (!dq.empty() && dq.front() == i - k) dq.pop_front();
            while (!dq.empty() && nums[dq.back()] < nums[i])
                dq.pop_back();
            dq.push_back(i);
            if (i >= k - 1) ans.push_back(nums[dq.front()]);
        }
        return ans;
    }
};
//-------------------------------------------------------------------  Brute force  ------------------------------------------------------------------------------------//
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>win;
        vector<int>ans;
        int maxi;
        for(int i = 0 ;i< k;i++){
            win.push_back(nums[i]);
        }
        maxi = *max_element(win.begin(),win.end());
        ans.push_back(maxi);
        for(int i =k;i<nums.size();i++){
            win.erase(win.begin());
            win.push_back(nums[i]);
            maxi = *max_element(win.begin(),win.end());
            ans.push_back(maxi);
        }
        return ans;
        
    }
};
