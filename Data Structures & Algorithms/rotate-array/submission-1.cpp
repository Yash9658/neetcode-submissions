class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        int n = arr.size();
    k = k % n;
        reverse(arr.begin(), arr.end());      // Put last elements at front
    reverse(arr.begin(), arr.begin() + k); // Fix first k
    reverse(arr.begin() + k, arr.end());   // Fix remaining
}
    
};