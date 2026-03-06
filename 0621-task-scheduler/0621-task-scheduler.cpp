class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int freq[26] = {0};
        for(char c:tasks){
            freq[c-'A']++;
        }
        sort(freq,freq+26); // freq points to freq[0] then so....
        int maxi = freq[25];
        int maxCnt =0;
        for(int i=25;i>=0 && freq[i]==maxi;i--){
            maxCnt++;
        }
        int formula = (maxi-1)*(n+1)+maxCnt;
        int ans =max(formula,(int)tasks.size());
        return ans;
    }
};