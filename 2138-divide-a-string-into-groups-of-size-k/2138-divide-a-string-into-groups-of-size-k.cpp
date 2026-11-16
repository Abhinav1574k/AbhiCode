class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> res;
        int n = s.size();
        
        int i = 0;
        while(i + k <= n){
            res.push_back(s.substr(i, k));
            i += k;
        }
        
        if(n % k != 0){
            string last = s.substr(i, n % k) + string(k - (n % k), fill);
            res.push_back(last);
        }

        return res;
    }
};