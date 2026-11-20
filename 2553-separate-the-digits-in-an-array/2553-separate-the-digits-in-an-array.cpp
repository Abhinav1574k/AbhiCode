class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> res;

        for(int num : nums){
            vector<int> temp;
            while(num > 0){
                temp.push_back(num % 10);
                num /= 10;
            }

            while(!temp.empty()){
                res.push_back(temp.back());
                temp.pop_back();
            }
        }

        return res;
    }
};