class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;
      
        for (const auto& customerAccounts : accounts) {
            int currentCustomerWealth = accumulate(customerAccounts.begin(), customerAccounts.end(), 0);
            maxWealth = max(maxWealth, currentCustomerWealth);
        }
      
        return maxWealth;
    }
};