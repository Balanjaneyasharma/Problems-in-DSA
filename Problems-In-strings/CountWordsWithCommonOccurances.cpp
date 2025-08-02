class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        map<string,int>m1;
        map<string ,int>m2;
        for(auto it: words1){
            m1[it]+=1;
        }
        for(auto it:words2){
            m2[it]+=1;
        }
        int count=0;
        for(auto it:m1){
            if(it.second==1){
                if(m2[it.first]==1){
                    count++;
                }
            }
        }
        return count;
    }
};
