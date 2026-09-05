class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> ump;
        vector<int> res;
        int n = nums.size();
 
        for(int num : nums){
            ump[num]++;
        }

        for(auto it : ump){
            if(it.second > n / 3){
                res.push_back(it.first);
            }
        }

        return res;
    }
};