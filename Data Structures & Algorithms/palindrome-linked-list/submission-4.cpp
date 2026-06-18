class Solution {
private:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr != nullptr) {
            ListNode* nextTemp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextTemp;
        }
        return prev;
    }
    
public:
    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return true;
        
        // Step 1: Find middle using fast-slow pointers
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        // Step 2: Reverse second half
        ListNode* secondHalf = reverseList(slow);
        ListNode* firstHalf = head;
        
        // Step 3: Compare both halves
        ListNode* temp = secondHalf; // To restore later
        bool isPalindrome = true;
        while (secondHalf != nullptr) {
            if (firstHalf->val != secondHalf->val) {
                isPalindrome = false;
                break;
            }
            firstHalf = firstHalf->next;
            secondHalf = secondHalf->next;
        }
        
        // Step 4: Restore original list (optional)
        reverseList(temp);
        
        return isPalindrome;
    }
};