class Solution {
public:
    int findGCD(int a, int b){
        if(b == 0){
            return a;
        }
        return findGCD(b, a % b);
    }
    long long maxPairStrength(vector<int>& nums) {
        int n = nums.size();
        long long maxPair = LLONG_MIN;
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                long long gcdMax = pow(findGCD(nums[i], nums[j]), 2);
                long long prod = (long long)nums[i] * (long long)nums[j];
                maxPair = max(maxPair, prod / gcdMax);
            }
        }
        return maxPair;
    }
};