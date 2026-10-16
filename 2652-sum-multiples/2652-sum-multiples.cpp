class Solution {
public:
    int sumOfMultiples(int n) {
        int three = n / 3, five = n / 5, seven = n / 7;
        int sumT = (3 * three * (three + 1)) / 2;
        int sumF = (5 * five * (five + 1)) / 2;
        int sumS = (7 * seven * (seven + 1)) / 2;

        int tf = n / 15, fs = n / 35, st = n / 21;
        int commonTF = (15 * tf * (tf + 1)) / 2;
        int commonFS = (35 * fs * (fs + 1)) / 2;
        int commonST = (21 * st * (st + 1)) / 2;

        int triple = n / 105;
        int sumTri = (105 * triple * (triple + 1)) / 2;

        return sumT + sumF + sumS - commonTF - commonFS - commonST + sumTri;    
    }
};