class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit,temp=0;
        for(int i=0;i<prices.size()-1;i++){
            for(int j=i+1;j<prices.size();j++){
                if(prices[i]<prices[j]){
                    profit=prices[j]-prices[i];
                    if(profit>temp){
                        temp=profit;
                    }
                }
            }
        }
        // cout<<temp<<endl;
    return temp;
    }
};
