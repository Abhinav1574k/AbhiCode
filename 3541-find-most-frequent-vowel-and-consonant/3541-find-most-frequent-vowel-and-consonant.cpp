class Solution {
public:
    int maxFreqSum(string s) {
        vector<int> count(26);
        int maxVowel = 0;
        int maxConsonant = 0;

        for (const char c : s)
            ++count[c - 'a'];

        for (const char c : s)
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                maxVowel = max(maxVowel, count[c - 'a']);
            else
                maxConsonant = max(maxConsonant, count[c - 'a']);

        return maxVowel + maxConsonant;
    }
};