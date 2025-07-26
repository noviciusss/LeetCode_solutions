class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> charIndex(128, -1);
        int  maxlen =0;
        int left=0;
        int right=0;
        while(right<s.length()){
            char chk=s[right];
            if(charIndex[chk]>=left){
                left= charIndex[chk]+1;
            }
            charIndex[chk]=right;
            maxlen = max(maxlen,right-left+1);
            right++;
        }
        return maxlen;
    }
};