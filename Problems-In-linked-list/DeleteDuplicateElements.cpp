class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* cur = head;
        ListNode* prev = NULL;
        ListNode* pprev = NULL;
        while(cur != NULL){
            if(prev !=NULL && prev->val == cur->val){
                while(cur != NULL && prev->val == cur->val){
                    cur = cur->next;
                }
                if(cur == NULL && pprev == NULL) return NULL;
                if(pprev != NULL){
                    pprev->next = cur;
                    if(cur == NULL) return head;
                }
                else head = cur;
                pprev = pprev;
                prev = cur; 
            }
            else{
                pprev = prev;
                prev = cur;
            }
            cur = cur->next;
        }
        return head;
    }
};
