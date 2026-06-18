class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* currA = headA;
        
        while (currA != nullptr) {
            ListNode* currB = headB;
            while (currB != nullptr) {
                if (currA == currB) return currA;
                currB = currB->next;
            }
            currA = currA->next;
        }
        return nullptr;
    }
};