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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<ListNode*> v;
        ListNode* temp=head;
        while(temp){
            v.push_back(temp);
            temp=temp->next;
        }
        left--;
        
        reverse(v.begin()+left,v.begin()+right);
        for(int i=0;i<v.size()-1;i++){
            v[i]->next=v[i+1];
        }
        v[v.size()-1]->next=nullptr;
        return v[0];
    }
};