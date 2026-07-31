class Solution:
    def arrangeCoins(self, n: int) -> int:
        ans = 0
        chk=0
        i = 1
        while chk<n:
            chk+=i
            ans+=1
            i+=1
        if chk==n:
            return ans
        return ans-1