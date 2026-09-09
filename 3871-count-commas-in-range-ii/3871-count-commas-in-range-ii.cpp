class Solution {
public:
    long long countCommas(long long n) {
        long long commas = 0;
        if (n >= 1000LL) commas += n - 999LL;
        if (n >= 1000000LL) commas += n - 999999LL;
        if (n >= 1000000000LL) commas += n - 999999999LL;
        if (n >= 1000000000000LL) commas += n - 999999999999LL;
        if (n >= 1000000000000000LL) commas += n - 999999999999999LL;
        return commas;
    }
};