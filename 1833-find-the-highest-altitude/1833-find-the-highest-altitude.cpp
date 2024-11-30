class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int high=0;
        int ans=0;
        for(int i=0;i<gain.size();i++){
            high+=gain[i];
            ans = max(ans,high);
        }
        return ans;
    }
};