class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWord = 0;

        for(int i = 0; i < sentences.size(); i++){
            int count = 0;

            for(int j = 0; j < sentences[i].size(); j++){
                if(sentences[i][j] == ' '){
                    count++;
                }
            }

            maxWord = max(maxWord, count + 1);
        }

        return maxWord;
    }
};