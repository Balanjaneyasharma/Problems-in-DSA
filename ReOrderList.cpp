class Solution {
public:
    void reorderList(ListNode* head) {
        stack<ListNode* >st;
        int size  = 0 ,count = 0;
        ListNode* temp = head ;
        while(temp != NULL){
            st.push(temp);
            size += 1;
            temp = temp->next ;
        }
        temp = head;
        while(temp != NULL){
            count += 1 ; 
            if(count > size/2){
                temp->next = NULL ;
                return ;
            }
            st.top()->next = temp->next ;
            temp->next = st.top() ;
            temp = st.top()->next;
            st.pop();
        }
        
    }
};
