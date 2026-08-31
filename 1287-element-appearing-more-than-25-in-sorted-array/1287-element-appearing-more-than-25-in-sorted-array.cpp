class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        int ele = arr[0];
        int count = 1;

        for(int i = 1; i < n ; i++){
            if(arr[i] == ele){
                count++;
            }
            else{
                if(count > n / 4){
                    return ele;
                }
                else{
                    ele = arr[i];
                    count = 1;
                }
            }
        }

        return ele;
    }
};