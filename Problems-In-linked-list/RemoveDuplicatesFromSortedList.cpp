class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* cur = head;
        while(cur !=NULL){
            if(prev != NULL && prev->val == cur->val){
                    prev->next = cur->next;
                    prev = prev;
            }
            else prev = cur;
            
            cur = cur->next;
        }
        return head;
    }
};
