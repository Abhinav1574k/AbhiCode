class Solution {
public:
    bool checkGoodInteger(int n) {
        int sum = 0, sqrSum = 0;
        
        while(n > 0){
            int d = n % 10;
            sum += d;
            sqrSum += (d * d);
            n /= 10;
        }

        return sqrSum - sum >= 50;
    }
};