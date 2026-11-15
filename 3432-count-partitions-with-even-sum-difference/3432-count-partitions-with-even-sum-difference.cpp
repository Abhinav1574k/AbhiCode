class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sumRight = 0, count = 0, sumLeft = 0;

        for(int num : nums){
            sumRight += num;
        }

        for(int i = 0; i < nums.size() - 1; i++){
            sumLeft += nums[i];
            sumRight -= nums[i];
            if((sumLeft - sumRight) % 2 == 0){
                count++;
            }
        }

        return count;
    }
};