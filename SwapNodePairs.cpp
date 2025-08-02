class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* prev =  NULL;
        ListNode* cur = head;
        ListNode* next = head->next;
        int size = 0;
        while(cur!=NULL){
            size++;
            cur = cur->next;
        }
        cur = head;
        // In case of even node swap all
        if(size%2 == 0){
            while(true){
                if(prev!=NULL) prev->next = next;
                cur->next = next->next;
                next->next = cur;
                if(prev == NULL) head = next;
                prev = cur;
                if(cur->next == NULL) break;
                cur = cur->next;
                next = cur->next;
            }
        }
        // else swap upto n-1 nodes..!!
        else{
            int count = 0;
            size = size - 1;
            while(true){
                if(count == size) break;
                if(prev!=NULL) prev->next = next;
                cur->next = next->next;
                next->next = cur;
                if(prev == NULL) head = next;
                prev = cur;
                if(cur->next == NULL) break;
                cur = cur->next;
                next = cur->next;
                count = count + 2;
            }
        }
        return head;
    }
};
