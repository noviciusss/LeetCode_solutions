class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        chari = set()
        l = 0 
        ans =0
        n = len(s)
        for ch in range(n):
            while s[ch] in chari:
                chari.remove(s[l])
                l+=1
            chari.add(s[ch])
            ans = max(ans,ch-l+1)
        return ans