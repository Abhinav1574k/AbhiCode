class Solution {
public:
    int findClosest(int x, int y, int z) {
        int dzx = abs(z - x);
        int dzy = abs(z - y);

        return dzx <= dzy ? (dzx == dzy ? 0 : 1) : 2;
    }
};