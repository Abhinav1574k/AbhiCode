class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int count = 0;
        char c1 = 0, c2 = 0;

        for(int i = 0; i < s1.size(); i++){
            if(s1[i] != s2[i]){
                if(++count > 2 || (count == 2 && (c1 != s2[i] || c2 != s1[i]))){
                    return false;
                }
                c1 = s1[i];
                c2 = s2[i];
            }
        }

        return count != 1;
    }
};