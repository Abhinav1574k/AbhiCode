class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int nonDivCount = 0;

        for(int num: nums){
            if(num % 3 != 0)
                nonDivCount++;
        }

        return nonDivCount;
    }
};