class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int minVal = INT_MAX;

        for(int i = 0; i < nums.size(); i += 2){
            int count = 1;
            int t = nums[i + 1];
            while(t > 0){
                count *= 10;
                t /= 10;
            }   
            minVal = min(minVal, nums[i] * count + nums[i + 1]);
        }

        return minVal;
    }
};