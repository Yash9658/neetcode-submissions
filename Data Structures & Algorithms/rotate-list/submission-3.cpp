class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr || k == 0) {
            return head;
        }
        
        // Step 1: Find length
        int length = 0;
        ListNode* curr = head;
        while (curr != nullptr) {
            length++;
            curr = curr->next;
        }
        
        k = k % length;
        if (k == 0) return head;
        
        // Step 2: Use two pointers
        ListNode* slow = head;
        ListNode* fast = head;
        
        // Move fast pointer k steps ahead
        for (int i = 0; i < k; i++) {
            fast = fast->next;
        }
        
        // Move both until fast reaches end
        while (fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next;
        }
        
        // Step 3: Rotate
        ListNode* newHead = slow->next;
        slow->next = nullptr;
        fast->next = head;
        
        return newHead;
    }
};