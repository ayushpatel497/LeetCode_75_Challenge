class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int high=0;
        high=max(high,gain[0]);
        for(int i=1;i<gain.size();i++){
            gain[i]+=gain[i-1];
            high=max(high,gain[i]);
        }
        return high;
    }
};