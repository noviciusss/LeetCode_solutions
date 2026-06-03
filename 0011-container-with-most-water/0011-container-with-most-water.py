class Solution:
    def maxArea(self, height: List[int]) -> int:
        n =len(height)
        l = 0
        r = n-1
        maxar = 0
        while(l<r):
            wid = r-l
            heig = min(height[l],height[r])
            maxar = max(wid*heig,maxar)
            if height[l]>height[r]:
                r-=1
            else :
                l+=1
        return maxar