class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> values;
        
        // Collect all values
        for (ListNode* head : lists) {
            ListNode* curr = head;
            while (curr) {
                values.push_back(curr->val);
                curr = curr->next;
            }
        }
        
        // If no values, return nullptr
        if (values.empty()) return nullptr;
        
        // Sort values
        sort(values.begin(), values.end());
        
        // Create new list
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        
        for (int val : values) {
            curr->next = new ListNode(val);
            curr = curr->next;
        }
        
        return dummy->next;
    }
};