class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* prev = NULL;
        while(node->next!=NULL){
            prev = node;
            node->val = node->next->val;
            node = node->next;
        }
        // To avoid copy of last value we use prev pointer;
        prev->next = NULL;  
    }
};
