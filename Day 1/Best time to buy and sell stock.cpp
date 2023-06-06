class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int min = INT_MAX;
      int ans = 0;
      int temp = 0;
      int n = prices.size();
      for( int i = 0; i<n ;i++)
      {
         if(prices[i]<min)
         min = prices[i];
      
      temp = prices[i]-min;
      ans = max(temp,ans);
      }

      return ans;
    }
};
