class Solution {
public:
    int differenceOfSums(int n, int m) {
        int x = n / m;
        return (n * (n + 1) / 2) - 2 * ((x * (2 * m + (x - 1) * m)) / 2);
    }
};