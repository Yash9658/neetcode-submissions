class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head;
        
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* leftPrev = dummy;
        
        // Move to node before 'left'
        for (int i = 0; i < left - 1; i++) {
            leftPrev = leftPrev->next;
        }
        
        // Current node at position 'left'
        ListNode* curr = leftPrev->next;
        ListNode* prev = nullptr;
        ListNode* next = nullptr;
        
        // Reverse nodes from left to right
        for (int i = 0; i < right - left + 1; i++) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        // Connect the reversed part back
        leftPrev->next->next = curr;  // The old 'left' node points to node after 'right'
        leftPrev->next = prev;        // Node before 'left' points to new head of reversed part
        
        return dummy->next;
    }
};