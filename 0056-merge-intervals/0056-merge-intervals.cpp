class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](vector<int> a, vector<int> b){
            return a[0] < b[0];
        });

        vector<vector<int>> merged;
        merged.push_back(intervals[0]);

        for(int i = 1; i < intervals.size(); i++){
            if(intervals[i][0] <= merged[merged.size() - 1][1]){
                if(intervals[i][1] > merged[merged.size() - 1][1]){
                    merged[merged.size() - 1][1] = intervals[i][1];
                }
            }
            else{
                merged.push_back(intervals[i]);
            }
        }

        return merged;
    }
};