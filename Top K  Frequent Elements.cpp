class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        map<int,int>mpp;
        for(auto it: nums){
            mpp[it]+=1;
        }
        priority_queue<pair<int,int> >pq;
        for(auto it: mpp){
            pq.emplace(make_pair(it.second,it.first));
        }
        while(!pq.empty()&&k!=0){
            ans.push_back(pq.top().second);
            k=k-1;
            pq.pop();
        }
        return ans;
    }
};
