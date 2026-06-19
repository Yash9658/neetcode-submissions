#include <vector>
using namespace std;

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == nullptr || k == 1) return head;
        
        vector<ListNode*> nodes;
        ListNode* curr = head;
        
        // Store all nodes
        while (curr) {
            nodes.push_back(curr);
            curr = curr->next;
        }
        
        int n = nodes.size();
        
        // Reverse groups of k
        for (int i = 0; i + k <= n; i += k) {
            reverse(nodes.begin() + i, nodes.begin() + i + k);
        }
        
        // Reconstruct linked list
        for (int i = 0; i < n - 1; i++) {
            nodes[i]->next = nodes[i + 1];
        }
        if (n > 0) nodes[n - 1]->next = nullptr;
        
        return nodes.empty() ? nullptr : nodes[0];
    }
};