class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int maxCount = 0, rowIndex = 0;

        for(int i = 0; i < mat.size(); i++){
            int numCount = 0;
            for(int j = 0; j < mat[i].size(); j++){
                if(mat[i][j] == 1){
                    numCount++;
                }
            }
            
            if(numCount > maxCount){
                maxCount = numCount;
                rowIndex = i;
            }
        }

        return {rowIndex, maxCount};
    }
};