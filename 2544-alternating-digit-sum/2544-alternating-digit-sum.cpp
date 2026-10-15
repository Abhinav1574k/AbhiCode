class Solution {
public:
    int alternateDigitSum(int n) {
        int evenSum = 0, oddSum = 0;
        int count = 0;

        while(n > 0){
            if(count % 2 == 0){
                evenSum += (n % 10);
            }
            else{
                oddSum += (n % 10);
            }

            n /= 10;
            count++;
        }

        return count % 2 == 0 ? oddSum - evenSum : evenSum - oddSum;
    }
};