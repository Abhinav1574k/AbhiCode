class Solution {
public:
    int minChanges(string s) {
        int n = s.size();
        char c = s[0];
        int minCount = 0;

        for(int i = 1; i < n; i++){
            if(s[i] != c){
                if((i + 1) % 2 == 0){
                    minCount++;
                }
                else{
                    c = s[i];
                }  
            }    
        }

        return minCount;
    }
};