class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
       chari  = set()
       l = 0
       ans = 0
       for r in range(len(s)):
            while s[r] in chari:
                chari.remove(s[l])
                l+=1
            chari.add(s[r])
            ans = max(ans,r-l+1)
       return ans
                

                