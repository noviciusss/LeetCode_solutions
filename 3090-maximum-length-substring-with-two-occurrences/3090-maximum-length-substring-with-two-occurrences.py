class Solution:
    def maximumLengthSubstring(self, s: str) -> int:
        seen = {}
        l = 0 
        ans = 0
        for r,char in enumerate(s):
            seen[char]= seen.get(char,0)+1
            while seen[char]>2:
                seen[s[l]]-=1
                l+=1
            ans = max(ans,r-l+1)
        return ans