class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> st;

        for(int num: nums){
            if(num % k == 0){
                st.insert(num);
            }
        }

        int i = 1;
        while(st.find(k * i) != st.end()){
            i++;
        }

        return k * i;
    }
};