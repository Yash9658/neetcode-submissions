class Solution {
private:
    int getLength(ListNode* head) {
        int len = 0;
        while (head != nullptr) {
            len++;
            head = head->next;
        }
        return len;
    }
    
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        int lenA = getLength(headA);
        int lenB = getLength(headB);
        
        ListNode* currA = headA;
        ListNode* currB = headB;
        
        // Move the longer list forward
        if (lenA > lenB) {
            int diff = lenA - lenB;
            while (diff--) currA = currA->next;
        } else {
            int diff = lenB - lenA;
            while (diff--) currB = currB->next;
        }
        
        // Move both pointers together
        while (currA != nullptr && currB != nullptr) {
            if (currA == currB) return currA;
            currA = currA->next;
            currB = currB->next;
        }
        
        return nullptr;
    }
};