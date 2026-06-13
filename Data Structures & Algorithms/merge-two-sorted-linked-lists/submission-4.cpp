class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;

        while (temp1 && temp2) {
            if (temp1->val <= temp2->val) {
                temp->next = temp1;
                temp1 = temp1->next;
            } else {
                temp->next = temp2;
                temp2 = temp2->next;
            }
            temp = temp->next;
        }
        
        // Attach remaining nodes (ONLY AFTER loop ends)
        if (temp1) temp->next = temp1;
        if (temp2) temp->next = temp2;
        
        ListNode* result = dummy->next;
        delete dummy;  // Optional: prevent memory leak
        return result;
    }
};