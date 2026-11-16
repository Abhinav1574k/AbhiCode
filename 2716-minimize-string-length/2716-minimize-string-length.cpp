class Solution {
public:
    int minimizedStringLength(string s) {
        vector<bool> alpha(26, 0);
        
        int count = 0;
        
        for(char c : s){
            if(alpha[int(c) - 97] == 0){
                alpha[int(c) - 97] = 1;
                count++;
            }
        }

        return count;
    }
};