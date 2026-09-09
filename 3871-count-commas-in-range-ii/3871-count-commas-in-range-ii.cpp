class Solution {
public:
    long long countCommas(long long n) {
        if(n < 1000){
            return 0;
        }
        else if(n < 1000000){
            return n - 1LL * 999;
        }
        else if(n < 1000000000){
            return (n - 1LL * 999) + (n - 1LL * 999999);
        }
        else if(n < 1000000000000){
            return (n - 1LL * 999) + (n - 1LL * 999999) + (n - 1LL * 999999999);
        }
        else if(n < 1000000000000000){
            return (n - 1LL * 999) + (n - 1LL * 999999) + (n - 1LL * 999999999) + (n - 1LL * 999999999999);
        }
        return (n - 1LL * 999) + (n - 1LL * 999999) + (n - 1LL * 999999999) + (n - 1LL * 999999999999) + 1;
    }
};