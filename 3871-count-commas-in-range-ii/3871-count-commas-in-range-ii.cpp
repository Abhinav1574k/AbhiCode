class Solution {
public:
    long long countCommas(long long n) {
        long long commas = 0;
        long long p = 1000LL;

        while(p <= n){
            commas += (n - p + 1);

            if (p > n / 1000){
                break;
            }
        
            p *= 1000LL;
        }
        return commas;
    }
};