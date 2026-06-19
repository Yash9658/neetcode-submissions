class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<ListNode*> nodes;
        
        // Collect all nodes
        for (ListNode* head : lists) {
            ListNode* curr = head;
            while (curr) {
                nodes.push_back(curr);
                curr = curr->next;
            }
        }
        
        // If no nodes, return nullptr
        if (nodes.empty()) return nullptr;
        
        // Sort nodes by value
        sort(nodes.begin(), nodes.end(), [](ListNode* a, ListNode* b) {
            return a->val < b->val;
        });
        
        // Reconnect nodes
        for (int i = 0; i < nodes.size() - 1; i++) {
            nodes[i]->next = nodes[i + 1];
        }
        nodes[nodes.size() - 1]->next = nullptr;
        
        return nodes[0];
    }
};