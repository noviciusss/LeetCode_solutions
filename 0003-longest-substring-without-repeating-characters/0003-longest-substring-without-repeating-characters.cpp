class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int>chk;
        int l=0;
        int r=0;
        int maxi = 0;
        int n = s.length();
        while(r<n){
            char c = s[r];
            while(chk.find(c)!=chk.end()){
                chk.erase(s[l]);
                l++;
            } 
            chk.insert(s[r]);
            maxi = max(maxi,r-l+1);
            r++;

            }

        return maxi;
    }
};