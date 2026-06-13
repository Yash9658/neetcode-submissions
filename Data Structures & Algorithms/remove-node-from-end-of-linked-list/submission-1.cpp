class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Create dummy node to handle edge cases
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        ListNode* slow = dummy;
        ListNode* fast = dummy;
        
        // Move fast pointer n+1 steps ahead
        for (int i = 0; i <= n; i++) {
            fast = fast->next;
        }
        
        // Move both pointers until fast reaches end
        while (fast != nullptr) {
            slow = slow->next;
            fast = fast->next;
        }
        
        // Remove the node
        ListNode* toDelete = slow->next;
        slow->next = slow->next->next;
        delete toDelete;
        
        ListNode* newHead = dummy->next;
        delete dummy;
        return newHead;
    }
};