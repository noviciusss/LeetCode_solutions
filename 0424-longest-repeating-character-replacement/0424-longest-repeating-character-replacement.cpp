class Solution {
public:
    int characterReplacement(string s, int k) {
        int lef=0;
        int maxl=0;
        int maxfre=0;
        vector<int>chk(26,0);
        for(int right=0;right<s.length();right++){
            chk[s[right]-'A']++;
            maxfre = max(maxfre,chk[s[right]-'A']);
            int rem = (right-lef+1)-maxfre;
            if(rem<=k){
                maxl=max(maxl,right-lef+1);
            }
            else{
                chk[s[lef]-'A']--;
                lef++;
            }
        }return maxl;
    }
};