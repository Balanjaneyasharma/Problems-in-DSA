class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mpp;
        for(int i =0;i<s.size();i++){
            mpp[s[i]]+=1;
        }
        priority_queue<pair<int,char> > pq;
        for(auto it: mpp){
            pq.emplace(make_pair(it.second,it.first));
        }
        string ans="";
        while(!pq.empty()){
            int k = pq.top().first;
            char c = pq.top().second;
            while(k--){
                ans+=c;
            }
            pq.pop();
        }
        return ans;
    }
};
