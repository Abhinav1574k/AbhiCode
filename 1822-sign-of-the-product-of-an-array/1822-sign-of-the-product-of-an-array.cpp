class Solution {
public:
    int arraySign(vector<int>& nums) {
        int prodSign = 1;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                return 0;
            }
            else if(nums[i] < 0){
                prodSign = -1 * prodSign;
            }
        }

        return prodSign;
    }
};