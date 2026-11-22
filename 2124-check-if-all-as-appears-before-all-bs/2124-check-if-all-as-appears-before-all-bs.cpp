class Solution {
public:
    bool checkString(string s) {
        bool flag = (s[0] == 'a');

        for(int i = 1; i < s.size(); i++){
            if(flag && s[i] == 'b'){
                flag = false;
            }

            if(!flag && s[i] == 'a'){
                return false;
            }
        }

        return true;
    }
};