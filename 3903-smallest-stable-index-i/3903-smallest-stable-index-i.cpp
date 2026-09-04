class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> suffixMin(n);

        suffixMin[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            suffixMin[i] = min(suffixMin[i + 1], nums[i]);
        }

        int preffixMax = 0;
        for (int i = 0; i < n; i++) {
            preffixMax = max(preffixMax, nums[i]);

            if (preffixMax - suffixMin[i] <= k) {
                return i;
            }
        }

        return -1;
    }
};