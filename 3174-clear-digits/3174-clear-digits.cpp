class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;

        for(char c : s){
            if(isdigit(c)){
                st.pop();
            }else{
                st.push(c);
            }
        }

        if(st.empty()){
            return "";
        }

        int n = st.size();
        string res(n, 'x');

        for(int i = n - 1; i >= 0; i--){
            res[i] = st.top();
            st.pop();
        }

        return res;
    }
};