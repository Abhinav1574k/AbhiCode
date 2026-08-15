class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.length();
        int i = 0;
        
        while(i < n){
            int j = i + k - 1 <= n - 1 ? i + k : n;
            reverse(s.begin() + i, s.begin() + j);
            i = i + 2 * k;
        }

        return s;
    }
};