class Solution {
public:
    ListNode* mergeTwoLists(ListNode* h1, ListNode* h2) {
        vector<int> v;
        ListNode* temp1 = h1;
        ListNode* temp2 = h2;
        
        // Collect all values
        while (temp1) {
            v.push_back(temp1->val);
            temp1 = temp1->next;
        }
        while (temp2) {
            v.push_back(temp2->val);
            temp2 = temp2->next;
        }
        
        // Sort values
        sort(v.begin(), v.end());
        
        // If no nodes, return nullptr
        if (v.empty()) return nullptr;
        
        // Create new head using first value
        ListNode* head = new ListNode(v[0]);
        ListNode* current = head;
        
        // Create new nodes for remaining values
        for (int i = 1; i < v.size(); i++) {
            current->next = new ListNode(v[i]);
            current = current->next;
        }
        
        return head;
    }
};