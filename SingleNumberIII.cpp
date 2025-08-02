class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>ans(2,0);
        int xori = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            xori = xori ^ nums[i];
        }
        int temp = xori;
        int count = 0;
        while(temp != 0){
            if(temp & 1) break;
            count += 1;
            temp >>= 1;
        }
        int xor1 =0 , xor2 = 0;
        int pos = 1<<count;
        for(int i = 0; i < nums.size(); i++){
            if(pos & nums[i]) xor1 ^= nums[i];
            else xor2 ^= nums[i];
        }
        ans[0] = xor1;
        ans[1] = xor2;
        return ans;
    }
};
