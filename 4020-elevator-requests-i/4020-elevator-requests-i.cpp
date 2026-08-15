class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int time = requests[0];

        for(int i = 1; i < requests.size(); i++){
            int distBetw = requests[i] - requests[i - 1];
            
            if(distBetw < 0){
                distBetw = -distBetw;
            }

            time += distBetw; 
        }

        return time;
    }
};