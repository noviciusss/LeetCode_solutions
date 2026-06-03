class Solution:
    def mySqrt(self, x: int) -> int:
        l = 2
        r  = x//2
        if x<2:
            return x
        while(l<=r):
            mid = l+(r-l)//2
            chk = mid*mid
            if chk ==x:
                return (mid)
            elif chk>x:
                r = mid-1
            else: 
                l = mid+1
            
        return r
        

        