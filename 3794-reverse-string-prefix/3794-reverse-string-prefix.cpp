class Solution {
public:
    string reversePrefix(string s, int k) {
        int l = s.size();
        l = k > l ? k % l : k;
        reverse(s.begin(), s.begin() + k);
        return s;
    }
};