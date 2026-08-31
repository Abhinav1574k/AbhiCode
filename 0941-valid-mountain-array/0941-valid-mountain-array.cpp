class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size() < 3){
            return false;
        }

        int i = 1;
        while(arr[i] > arr[i - 1]){
            i++;
        }

        if(i == arr.size() || i == 1){
            return false;
        }

        int peakElement = arr[i - 1];
        while(i < arr.size()){
            if(arr[i] >= peakElement || arr[i] >= arr[i - 1]){
                return false;
            }
            i++;
        }
        return true;
    }
};