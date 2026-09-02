class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> ump;
        int sum = 0;

        for(int num : nums){
            if(ump.find(num) != ump.end()){
                if(ump[num] != -1){
                    sum -= num;
                    ump[num] = -1;
                }
            }
            else{
                ump[num]++;
                sum += num;
            }
        }

        return sum;
    }
};