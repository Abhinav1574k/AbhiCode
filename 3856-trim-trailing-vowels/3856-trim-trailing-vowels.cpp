class Solution {
public:
    string trimTrailingVowels(string s) {
        unordered_set<char> st = {'a', 'e', 'i', 'o', 'u'};
        int n = s.size();

        int i = n - 1;
        while(i > 0 && st.find(s[i]) != st.end()){
            i--;
        }

        if(st.find(s[i]) == st.end()){
            return s.substr(0, i + 1);
        }
        return "";
    }
};