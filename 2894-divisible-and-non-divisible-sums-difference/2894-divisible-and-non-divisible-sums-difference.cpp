class Solution {
public:
    int differenceOfSums(int n, int m) {
        int x = n / m;
        int nonDiv = (x * (2 * m + (x - 1) * m)) / 2;
        int div = n * (n + 1) / 2;
        return div - 2 * nonDiv;
    }
};