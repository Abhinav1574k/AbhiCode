class Solution {
public:
    int arrangeCoins(int n) {
        int k = 0;
        while(n > k){
            k++;
            n -= k;
        }
        return k;
    }
};