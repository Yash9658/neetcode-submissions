class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // ✅ FIX 1: Handle empty list and single node
        if (head == nullptr) return nullptr;
        
        // Find length
        ListNode* temp = head;
        int len = 0;
        while (temp) {
            len++;
            temp = temp->next;
        }
        
        // ✅ FIX 2: Calculate position from start (1-indexed)
        int posFromStart = len - n + 1;
        
        // ✅ FIX 3: Special case - removing head
        if (posFromStart == 1) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        
        // ✅ FIX 4: Traverse to node before the one to delete
        temp = head;
        for (int i = 1; i < posFromStart - 1; i++) {
            temp = temp->next;
        }
        
        // ✅ FIX 5: Remove the node
        
        temp->next = temp->next->next;
        
        
        return head;
    }
};