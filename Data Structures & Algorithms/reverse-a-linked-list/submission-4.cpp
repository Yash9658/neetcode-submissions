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
        if (head == nullptr) return nullptr;

        vector<ListNode*> ans;

        ListNode* curr=head;
        while(curr){
            ans.push_back(curr);
            curr=curr->next;
        }
        reverse(ans.begin(),ans.end());
        for(int i=0;i<ans.size()-1;i++){
            ans[i]->next=ans[i+1];
        }
        ans[ans.size()-1]->next=nullptr;
        return ans.front();
    }
};
