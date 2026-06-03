class Solution:
   
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        r = max(piles)
        l = 1
        ans = 0
        while(l<=r):
            chk = 0
            mid = l+(r-l)//2
            for i in piles:
                chk += math.ceil(i/mid)
            if chk>h:
                l=mid+1
            else:
                ans = mid
                r = mid-1
            
        return ans
            

