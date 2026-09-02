class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int n1 = word1.size(), n2 = word2.size();
        int s1 = 0, s2 = 0, ch1 = 0, ch2 = 0; 

        while(s1 < n1 && s2 < n2){
            if(word1[s1][ch1] != word2[s2][ch2]){
                return false;
            }

            ch1++;
            ch2++;

            if(ch1 >= word1[s1].size()){
                ch1 = 0;
                s1++;
            }
            
            if(ch2 >= word2[s2].size()){
                ch2 = 0;
                s2++;
            }
        }

        if(s1 >= n1 && s2 >= n2){
            return true;
        }
        return false;
    }
};