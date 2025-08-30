class Solution {
public:
    long long maxProfit(vector<int>& prices, vector<int>& strategy, int k) {
        int n = prices.size();
  
        long long profit = 0;
        for (int i = 0; i < n; i++) {
            profit += 1LL * strategy[i] * prices[i];
        }

        vector<long long> P(n+1, 0), S(n+1, 0);
        for (int i = 0; i < n; i++) {
            P[i+1] = P[i] + prices[i];
            S[i+1] = S[i] + 1LL * strategy[i] * prices[i];
        }
        long long bgain = 0;
        for (int l = 0; l + k <= n; l++) {
            int r = l + k - 1;
            long long original_sum = S[r+1] - S[l];        
            long long new_sum = P[r+1] - P[l + k/2];         
            long long delta = new_sum - original_sum;
            bgain = max(bgain, delta);
        }

        return profit + bgain;
    }
};
