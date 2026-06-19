#include <stack>
using namespace std;

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head;
        
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;
        
        // Move to node before 'left'
        for (int i = 0; i < left - 1; i++) {
            prev = prev->next;
        }
        
        ListNode* curr = prev->next;
        stack<ListNode*> st;
        
        // Push nodes from left to right onto stack
        for (int i = 0; i < right - left + 1; i++) {
            st.push(curr);
            curr = curr->next;
        }
        
        // Pop and reconnect in reverse order
        while (!st.empty()) {
            prev->next = st.top();
            st.pop();
            prev = prev->next;
        }
        
        // Connect to remaining list
        prev->next = curr;
        
        return dummy->next;
    }
};