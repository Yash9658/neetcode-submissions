/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next)    return head;
        ListNode* temp=head;
        ListNode* dum= NULL;
        while(temp){
            ListNode* var=temp->next;
            temp->next=dum;
            dum=temp;
            temp=var;
        }
    return dum;
        
    }
};
