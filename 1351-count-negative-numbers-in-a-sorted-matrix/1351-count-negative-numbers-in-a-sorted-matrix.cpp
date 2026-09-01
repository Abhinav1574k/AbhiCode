class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;

        for(int i = 0; i < m; i++){
            int s = i * n;
            int e = s + n - 1;

            while(s < e){
                int mid = s + (e - s) / 2;
                
                if(grid[mid / n][mid % n] >= 0){
                    s = mid + 1;
                }
                else{
                    e = mid;
                }
            }

            if(grid[s / n][s % n] < 0){
                count += (i * n + n - s);
            }
        }
        return count;
    }
};