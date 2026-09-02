class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n = s1.size();

        int i = 0;
        while(i < n && s1[i] == s2[i]){
            i++;
        }
        
        int j = i + 1;
        while(j < n && s1[j] == s2[j]){
            j++;
        }

        if(i < n && j < n){
            swap(s1[i], s1[j]);
        }

        return s1 == s2; 
    }
};