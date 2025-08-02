class Solution {
public:
    void recursion(ListNode* node , stack<int>&st,vector<int>&ans,int& i){
        if(node->next != NULL){
            recursion(node->next,st,ans,i);
        }
        if(node->next!= NULL){
            while(!st.empty() && st.top()<=node->val) st.pop();
            if(!st.empty() && st.top()>node->val) ans[i] = st.top();
            st.push(node->val);
            i --;
        }
    }
    vector<int> nextLargerNodes(ListNode* head) {
        stack<int>st;
        ListNode* temp = head;
        int size = 0 ;
        while(temp != NULL){
            size++;
            if(temp->next == NULL) st.push(temp->val);
            temp =temp->next;
        }
        vector<int>ans(size,0);
        size = size - 2;
        recursion(head,st,ans,size);
        return ans;
        
    }
};
