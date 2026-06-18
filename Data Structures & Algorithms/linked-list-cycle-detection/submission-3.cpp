#include <unordered_set>
using namespace std;

class Solution {
public:
    bool hasCycle(ListNode* head) {
        unordered_set<ListNode*> visited;
        ListNode* curr = head;
        
        while (curr != nullptr) {
            if (visited.count(curr)) return true;
            visited.insert(curr);
            curr = curr->next;
        }
        return false;
    }

};