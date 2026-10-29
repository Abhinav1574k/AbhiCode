class Solution {
public:
    bool validDigit(int n, int x) {
        int d;
        bool valid = false;

        while(n > 0){
            d = n % 10;
            if(d == x){
                valid = true;
            }
            n /= 10;
        }

        if(d == x){
            valid = false;
        }

        return valid;
    }
};