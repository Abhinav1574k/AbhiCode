class Solution {
public:
    bool squareIsWhite(string coordinates) {
        unordered_map<char , int> val = {
            {'a' , 1},
            {'b' , 2},
            {'c' , 3},
            {'d' , 4},
            {'e' , 5},
            {'f' , 6},
            {'g' , 7},
            {'h' , 8}
        };

        return (val[coordinates[0]] + (coordinates[1] - '0')) % 2 != 0; 

        
    }
};