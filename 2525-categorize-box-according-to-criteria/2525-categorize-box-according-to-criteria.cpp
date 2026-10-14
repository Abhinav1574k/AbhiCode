class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        long long volume = 1LL * length * height * width;
        bool bul = (volume >= 1e9 || width >= 1e4 || height >= 1e4 || length >= 1e4);
        bool heav = (mass >= 100);

        if(bul && heav){
            return "Both";
        }
        else if(bul){
            return "Bulky";
        }
        else if(heav){
            return "Heavy";
        }
        return "Neither";
    }
};