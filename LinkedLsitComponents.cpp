class Solution {
public:
    int numComponents(ListNode* head, vector<int>& nums) {
        map<int,int>mpp;
        for(auto it: nums){
            mpp[it]+=1;
        }
        int count = 0 , maxcount = 0 ;
        while(head != NULL){
            if(mpp[head->val]==1){
                count=1;
            }
            else{
                maxcount+=count;
                count = 0;
            }
            head = head->next;
        }
        if(count == 1) maxcount+=count;
        return maxcount;
    }
};
