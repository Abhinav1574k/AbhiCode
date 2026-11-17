class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n = s.size(), ones = 0;

        for (char c : s) {
            if (c == '1')
                ones++;
        }

        for (int i = 0; i < ones - 1; i++){
            s[i] = '1';
        }

        for (int i = ones - 1; i < n - 1; i++){
            s[i] = '0';
        }

        s[n - 1] = '1';

        return s;
    }
};