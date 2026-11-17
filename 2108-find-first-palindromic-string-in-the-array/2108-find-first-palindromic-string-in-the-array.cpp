class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int n = words.size();

        for(int i = 0; i < n; i++){
            string res = words[i];
            reverse(res.begin(), res.end());
            if(words[i] == res){
                return words[i];
            }
        }

        return "";
    }
};