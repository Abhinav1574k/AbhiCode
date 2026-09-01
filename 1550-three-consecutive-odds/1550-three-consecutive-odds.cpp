class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int oddCount = 0;

        for(int num : arr){
            oddCount = num % 2 ? oddCount + 1 : 0 ;

            if(oddCount == 3){
                return true;
            }
        }
        return false;
    }
};