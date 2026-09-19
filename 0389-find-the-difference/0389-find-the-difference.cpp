class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> ump;

        for(char ch : s){
            ump[ch]++;
        }

        for(char ch : t){
            if(ump.find(ch) == ump.end() || ump[ch] == 0){
                return ch;
            }
            ump[ch]--;
        }
        return t[0];
    }
};