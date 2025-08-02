class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int size = 0;
        while(temp!=NULL){
            size+=1;
            temp = temp->next;
        }
        int pos = size - n;
        cout<<size<<" "<<pos;
        temp = head;
        ListNode* prev = NULL;
        ListNode* cur = head;
        int count = 0;
        while(cur!= NULL){
            if(count == pos){
                if(prev!=NULL) prev->next = cur->next;
                else head = head->next;
                return head;
            }
            count+=1;
            prev = cur;
            cur = cur->next;
        }
        return head;
    }
};
