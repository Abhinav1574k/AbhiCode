class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int best = 0;

        for (auto& s : sentences){
            best = max(best, (int)count(s.begin(), s.end(), ' ') + 1);
        } 
        
        return best;
    }
};