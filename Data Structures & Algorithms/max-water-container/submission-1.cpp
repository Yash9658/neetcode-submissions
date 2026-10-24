class Solution {
public:
    int maxArea(vector<int>& h) {
        int area =0;
        int maxarea=0;
        int i=0;
        int j=h.size()-1;
        while(i<j){
            area=min(h[i],h[j])*(j-i);
            maxarea=max(area,maxarea);
            if(h[i]<h[j]) i++;
            else          j--;
        }
        return maxarea;
    }
};
