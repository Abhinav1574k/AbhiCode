class Solution {
public:
    int maximum69Number (int num) {
        int pos = -1;
        int place = 1;

        for(int t = num; t > 0; t /= 10){
            if(t % 10 == 6){
                pos = place;
            }
            place *= 10;
        }

        return pos == -1 ? num : num + 3 * pos;
    }
};