class Solution {
public:
    string truncateSentence(string s, int k) {
        int i = 0;
        while(k > 0 && i < s.size()){
            if(s[i] == ' '){
                k--;
            }
            i++;
        }

        if(i == s.size()){
            return s;
        }
        return s.substr(0, i - 1);
    }
};