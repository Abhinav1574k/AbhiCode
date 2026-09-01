class Solution {
public:
    int xorOperation(int n, int start) {
        int result = start;
        int i = 1;

        while(i < n){
            result ^= (start + 2 * i);
            i++;
        }

        return result;
    }
};