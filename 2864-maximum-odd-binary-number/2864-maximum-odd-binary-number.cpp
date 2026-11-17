class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n = s.size();

        int i = 0, j = 0;
        while(i < n){
            if(s[i] == '1'){
                swap(s[i], s[j]);
                j++;
            }
            i++;
        }

        swap(s[j - 1], s[n - 1]);

        return s;
    }
};