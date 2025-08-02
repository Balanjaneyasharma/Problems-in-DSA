class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int size1   = 0 , size2 = 0;
        ListNode* temp = l1;
        while(temp!=NULL){
            size1 += 1;
            temp = temp->next;
        }
        temp = l2;
        while(temp!=NULL){
            size2 += 1;
            temp = temp->next;
        }
        if(size2>size1){
            temp = l1;
            l1 = l2;
            l2 = temp;
        }
        temp = l1;
        int carry = 0;
        int sum ;
        while(temp!=NULL){
            if(l2 != NULL){
                sum = temp->val + l2->val + carry;
                l2 = l2->next;
            }
            else sum = temp->val + carry ;
            temp->val = sum%10;
            if(sum>=10) carry = 1;
            else carry = 0;
            if(temp->next == NULL) break;
            temp = temp->next;
        }
        if(carry > 0) temp->next = new ListNode(carry);
        return l1;
    }
};
