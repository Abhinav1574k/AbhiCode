class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        int d = arr[1] - arr[0];

        for(int i = 1; i < arr.size(); i++){
            int diff = abs(arr[i] - arr[i - 1]);
            
            if(diff != d){
                return false;
            }

            d = diff;
        }

        return true;
    }
};