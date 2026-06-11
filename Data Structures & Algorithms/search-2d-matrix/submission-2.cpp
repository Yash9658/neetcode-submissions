class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int x) {
        // Approach 1: Binary Search on Flattened Array
          int row=m.size();
          int col=m[0].size();
          int i=0;
          int j=row*col-1;
          while(i<=j){
            int mid=i + (j-i)/2;
            int r=mid/col;
            int c=mid%col;
            if(m[r][c]==x)  return true;
            else if(m[r][c]>x) j=mid-1;
            else i=mid+1;
          } 
          return false;     
    }
};
