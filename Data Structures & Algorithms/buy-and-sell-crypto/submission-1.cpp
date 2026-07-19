class Solution {
public:
    int func(vector<int> prices,int index,int k){
        if(index==prices.size()) return 0;
        if(k==0) return 0;
        if (k==2){
            int skip=func(prices,index+1,k);
            int buy=func(prices,index+1,k-1)-prices[index];
            return max(buy,skip);
        }
        else {
            int skip=func(prices,index+1,k);
            int sell=func(prices,index+1,k-1)+prices[index];
            return max(sell,skip);
        }
    }
    int maxProfit(vector<int>& prices) {
     
        return func(prices,0,2);
    }
};
