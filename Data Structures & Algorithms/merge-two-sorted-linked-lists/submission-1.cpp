class Solution {
public:
    ListNode* mergeTwoLists(ListNode* h1, ListNode* h2) {
        vector<int> v;
        ListNode* temp1 = h1;
        ListNode* temp2 = h2;
        
        // Collect all values from both lists
        while (temp1) {
            v.push_back(temp1->val);
            temp1 = temp1->next;
        }
        while (temp2) {
            v.push_back(temp2->val);
            temp2 = temp2->next;
        }
        
        // Sort the values
        sort(v.begin(), v.end());
        
        // If both lists were empty
        if (v.empty()) return nullptr;
        
        // Update first list with sorted values
        temp1 = h1;
        int index = 0;
        
        // Use existing nodes to store sorted values
        while (temp1 && index < v.size()) {
            temp1->val = v[index++];
            temp1 = temp1->next;
        }
        
        // If more values remain, use second list nodes
        temp2 = h2;
        while (temp2 && index < v.size()) {
            temp2->val = v[index++];
            temp2 = temp2->next;
        }
        
        // Connect lists properly
        // Find the tail of first list
        temp1 = h1;
        while (temp1 && temp1->next) {
            temp1 = temp1->next;
        }
        
        // Connect first list to second list if both exist
        if (temp1 && h2) {
            temp1->next = h2;
        }
        
        // Return the head (first node of first list, or second if first is empty)
        return h1 ? h1 : h2;
    }
};