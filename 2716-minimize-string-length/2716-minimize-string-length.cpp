class Solution {
public:
    int minimizedStringLength(string s) {
        vector<bool> alpha(26, 0);
        
        int count = 0;
        
        for(char c : s){
            if(alpha[c - 'a'] == 0){
                alpha[c - 'a'] = 1;
                count++;
            }
        }

        return count;
    }
};