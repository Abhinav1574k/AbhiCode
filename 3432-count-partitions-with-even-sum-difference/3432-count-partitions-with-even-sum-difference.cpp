class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum1 = nums[0], sum2 = 0, ans = 0;
        for(int i = 1; i < nums.size(); i++){
            sum2+= nums[i];
        }
        for(int i = 1; i < nums.size(); i++){
            if((sum2 - sum1) % 2 == 0){
                ans++;
            }
            sum2-=nums[i];
            sum1+=nums[i];
        }
        return ans;
    }
};