class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n = s.size();
        int j = 0;

        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                swap(s[i], s[j]);
                j++;
            }
        }

        swap(s[j - 1], s[n - 1]);

        return s;
    }
};