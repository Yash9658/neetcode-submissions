class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr || k == 0) {
            return head;
        }
        
        // Store all nodes in vector
        vector<ListNode*> nodes;
        ListNode* curr = head;
        while (curr != nullptr) {
            nodes.push_back(curr);
            curr = curr->next;
        }
        
        int n = nodes.size();
        k = k % n;
        if (k == 0) return head;
        
        // Reconnect
        nodes[n - k - 1]->next = nullptr;
        nodes[n - 1]->next = nodes[0];
        
        return nodes[n - k];
    }
};