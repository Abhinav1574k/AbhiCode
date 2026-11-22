class Solution {
public:
    bool checkString(string s) {
        for(int i = 1; i < s.size(); i++){
            if(s[i] - s[i - 1] < 0){
                return false;
            }
        }

        return true;
    }
};