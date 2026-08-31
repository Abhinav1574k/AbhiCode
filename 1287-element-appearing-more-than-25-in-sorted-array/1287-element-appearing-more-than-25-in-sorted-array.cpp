class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        int minFreq = n / 4;

        for(int i = 0; i < n - minFreq; i++){
            if(arr[i] == arr[i + minFreq]){
                return arr[i];
            }
        }

        return -1;
    }
};