class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> st;

        for(int num : arr){
            if(num % 2 == 0 && st.find(num / 2) != st.end()){
                return true;
            }
            if(st.find(num * 2) != st.end()){
                return true;
            }
            st.insert(num);
        }
        return false;
    }
};