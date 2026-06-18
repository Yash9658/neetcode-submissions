#include <unordered_set>
using namespace std;

class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        unordered_set<ListNode*> nodeSet;
        
        // Store all nodes of list A
        ListNode* curr = headA;
        while (curr != nullptr) {
            nodeSet.insert(curr);
            curr = curr->next;
        }
        
        // Check nodes of list B
        curr = headB;
        while (curr != nullptr) {
            if (nodeSet.count(curr)) return curr;
            curr = curr->next;
        }
        return nullptr;
    }
};