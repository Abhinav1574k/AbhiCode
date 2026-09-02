class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int cnt[101]{}; 
        int ans = 0;
        
        for (int& x : nums) {
            if (++cnt[x] == 1) {
                ans += x;
            } else if (cnt[x] == 2) {
                ans -= x; 
            }
        }
        return ans;
    }
};   