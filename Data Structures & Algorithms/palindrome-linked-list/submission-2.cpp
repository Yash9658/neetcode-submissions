
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> vec;
        ListNode* current = head;
        
        while (current != nullptr) {
            vec.push_back(current->val);
            current = current->next;
        }
        
        int left = 0, right = vec.size() - 1;
        while (left < right) {
            if (vec[left] != vec[right]) return false;
            left++;
            right--;
        }
        return true;
    }
};