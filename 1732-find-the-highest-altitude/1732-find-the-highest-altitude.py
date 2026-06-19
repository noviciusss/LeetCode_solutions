class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        ans = 0
        chk = 0
        for i in gain:
            chk +=i
            ans = max(ans,chk)
        return ans