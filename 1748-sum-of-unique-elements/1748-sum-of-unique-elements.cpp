class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> ump;
        int sum = 0;

        for(int num : nums){
            ump[num]++;
        }

        for(int num : nums){
            if(ump[num] == 1){
                sum += num;
            }
        }

        return sum;
    }
};