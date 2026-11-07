class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> st;
        for(char c: jewels){
            st.insert(c);
        }

        int count = 0;
        for(char x: stones){
            if(st.find(x) != st.end()){
                count++;
            }
        }

        return count;
    }
};