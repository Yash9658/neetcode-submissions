#include <queue>
using namespace std;

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        // Custom comparator for min-heap
        auto cmp = [](ListNode* a, ListNode* b) {
            return a->val > b->val;
        };
        
        priority_queue<ListNode*, vector<ListNode*>, decltype(cmp)> pq(cmp);
        
        // Push first node of each list
        for (ListNode* head : lists) {
            if (head) pq.push(head);
        }
        
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        
        while (!pq.empty()) {
            ListNode* minNode = pq.top();
            pq.pop();
            
            curr->next = minNode;
            curr = curr->next;
            
            if (minNode->next) {
                pq.push(minNode->next);
            }
        }
        
        return dummy->next;
    }
};