class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double kel = celsius + 273.15, faah = celsius * 1.80 + 32.00;
        return {kel, faah};
    }
};