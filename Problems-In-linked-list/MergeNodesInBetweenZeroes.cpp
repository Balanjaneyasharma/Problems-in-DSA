class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head;
        ListNode* cur = temp;
        while(temp != NULL){
            if(temp->val != 0){
                cur = temp;
                temp = temp->next;
                while(temp!= NULL &&temp->val != 0){
                    cur->val += temp->val;
                    temp = temp->next;
                }
                cur->next = temp->next;
            }
            temp = temp->next;
        }
        return head->next;
        
    }
};
