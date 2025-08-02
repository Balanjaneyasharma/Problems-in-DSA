class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        int count =0,presum=0,rem;
        map<int,int>dic;
        dic[0]=1;
        for(int i=0;i<n;i++){
            presum+=nums[i];
            rem=presum%k;
            if(rem<0){
                rem+=k;    
            }
            if(dic.find(rem)!=dic.end()){
                count+=dic[rem];
            }
            dic[rem]++;
        }
        return count;
    }
};
