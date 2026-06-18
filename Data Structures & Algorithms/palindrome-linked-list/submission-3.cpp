class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return true;
        
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;
        
        // Reverse first half while finding middle
        while (fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next;
            
            // Reverse the first half
            ListNode* next = slow->next;
            slow->next = prev;
            prev = slow;
            slow = next;
        }
        
        // If odd length, skip the middle node
        if (fast != nullptr) {
            slow = slow->next;
        }
        
        // Compare reversed first half (prev) with second half (slow)
        while (slow != nullptr && prev != nullptr) {
            if (slow->val != prev->val) return false;
            slow = slow->next;
            prev = prev->next;
        }
        
        return true;
    }
};