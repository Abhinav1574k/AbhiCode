class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int smallestOdd = INT_MAX, smallestEven = INT_MAX;

        for(int num : nums1){
            if(num % 2 == 0){
                smallestEven = min(smallestEven, num);
            }
            else{
                smallestOdd = min(smallestOdd, num);
            }
        }

        if(smallestOdd == INT_MAX || smallestEven == INT_MAX || smallestOdd < smallestEven){
            return true;
        }
        return false;
    }
};