class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0, prod = 1;
        int value = n;
        while(value > 0){
            int digit = value % 10;
            sum += digit;
            prod *= digit;
            value /= 10;
        }
        return !(n % (sum + prod)) ;
    }
};