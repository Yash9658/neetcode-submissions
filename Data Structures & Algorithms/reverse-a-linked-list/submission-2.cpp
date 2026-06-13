class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) return nullptr;
        
        stack<ListNode*> st;
        ListNode* curr = head;
        
        // Push all nodes onto stack
        while (curr != nullptr) {
            st.push(curr);
            curr = curr->next;
        }
        
        // Pop nodes to rebuild reversed list
        ListNode* newHead = st.top();
        st.pop();
        curr = newHead;
        
        while (!st.empty()) {
            curr->next = st.top();
            st.pop();
            curr = curr->next;
        }
        curr->next = nullptr;
        
        return newHead;
    }
};