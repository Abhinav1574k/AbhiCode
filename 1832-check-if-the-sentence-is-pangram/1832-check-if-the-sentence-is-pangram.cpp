class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> alpha;
        
        for(char c: sentence){
            alpha.insert(c);
        }

        return alpha.size() == 26;
    }
};