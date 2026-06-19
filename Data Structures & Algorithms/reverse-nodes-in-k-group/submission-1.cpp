class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head || k == 1) return head;
        
        // Count nodes
        int n = 0;
        for (ListNode* temp = head; temp; temp = temp->next) n++;
        
        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;
        ListNode* curr = head;
        
        while (n >= k) {
            curr = prev->next;
            ListNode* next = curr->next;
            
            for (int i = 1; i < k; i++) {
                curr->next = next->next;
                next->next = prev->next;
                prev->next = next;
                next = curr->next;
            }
            
            prev = curr;
            n -= k;
        }
        
        return dummy->next;
    }
};