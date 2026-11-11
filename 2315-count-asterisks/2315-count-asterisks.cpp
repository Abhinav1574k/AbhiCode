class Solution {
public:
    int countAsterisks(string s) {
        int astCount = 0, barCount = 0;

        for(char c: s){
            if(barCount % 2 == 0 && c == '*'){
                astCount++;
            }

            if(c == '|'){
                barCount++;
            }
        }

        return astCount;
    }
};