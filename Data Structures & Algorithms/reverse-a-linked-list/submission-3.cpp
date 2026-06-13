class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) return nullptr;
        
        vector<ListNode*> nodes;
        ListNode* curr = head;
        
        // Store all nodes in vector
        while (curr != nullptr) {
            nodes.push_back(curr);
            curr = curr->next;
        }
        
        // Rebuild in reverse order
        for (int i = nodes.size() - 1; i > 0; i--) {
            nodes[i]->next = nodes[i - 1];
        }
        nodes[0]->next = nullptr;
        
        return nodes.back();
    }
};