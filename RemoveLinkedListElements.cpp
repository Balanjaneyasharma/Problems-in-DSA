class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* prev = NULL;
        ListNode* cur = head;
        while(cur != NULL){
            if(cur->val == val){
                if(prev != NULL) prev->next = cur->next;
                else head = head -> next;
                prev = prev;
            }
            else prev = cur;
            cur = cur->next;
        }
        return head;
    }
}
