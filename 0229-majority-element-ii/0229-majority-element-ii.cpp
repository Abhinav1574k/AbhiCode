class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        vector<int> res;
        int n = nums.size(), lastVal = INT_MIN;
        int i = 0;
        while(i + n / 3 < n){
            if(nums[i] == nums[i + n / 3] && nums[i] != lastVal){
                res.push_back(nums[i]);
                lastVal = nums[i];
                i += n / 3;
            }
            else{
                i++;
            }
        }

        return res;

    }
};