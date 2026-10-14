class Solution {
public:
    int averageValue(vector<int>& nums) {
        int count = 0, sum = 0;

        for(int num: nums){
            if(num % 6 == 0){
                count++;
                sum += num;
            }
        }

        return count > 0 ? (sum / count) : 0;
    }
};