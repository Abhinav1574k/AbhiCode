class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        
        int j = 0;
        for(int i = 0; i <= n; i++){
            if(i == n || s[i] == ' '){
                reverse(s.begin() + j, s.begin() + i);
                j = i + 1; 
            }
        }
        
        return s;
    }
};