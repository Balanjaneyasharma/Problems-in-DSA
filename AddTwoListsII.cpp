class Solution {
public:
    int getSize(ListNode* head){
        int size = 0 ;
        ListNode* temp = head ;
        while(temp != NULL){
            size += 1;
            temp = temp->next;
        }
        return size;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack <ListNode* > st1;
        stack <ListNode* > st2;
        int size1 = getSize(l1);
        int size2 = getSize(l2);
        ListNode* temp ;
        if(size2 >size1){
            temp = l2;
            l2 = l1;
            l1 = temp;
        }
        temp = l1;
        while(temp != NULL){
            st1.push(temp);
            temp = temp->next;
        }
        temp = l2;
        while(temp != NULL){
            st2.push(temp);
            temp = temp->next;
        }
        temp = l1;
        int sum ;
        int carry = 0;
        stack<ListNode* > ans ;
        
        while(!(st1.empty())){
            if(!st2.empty()){
                sum = st1.top()->val + st2.top()->val + carry ;
                st2.pop();
            }
            else{
                sum = st1.top()->val + carry ;
            }
            ans.push(new ListNode(sum%10));
            if(sum >= 10) carry = 1 ;
            else carry = 0 ;
            st1.pop();
        }
        if(carry > 0) ans.push(new ListNode(carry)) ;
        ListNode* head = ans.top();
        while(!(ans.empty())){
            temp = ans.top();
            ans.pop();
            if(!ans.empty()) temp->next = ans.top();
            else {
                temp->next = NULL;
                break;
            }
        }
        return head;
        
    }
};
