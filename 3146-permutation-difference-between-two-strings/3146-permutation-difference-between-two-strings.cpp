class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map <char, int> ump;

        for(int i = 0; i < s.size(); i++){
            ump[s[i]] = i;
        }

        int sum = 0;
        for(int i = 0; i < t.size(); i++){
            sum += abs(i - ump[t[i]]);
        }

        return sum;
    }
};