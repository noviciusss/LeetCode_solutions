class Solution:
    def maxAreaOfIsland(self, grid: List[List[int]]) -> int:
        row = len(grid)
        col = len(grid[0])
        ans = 0

        def dfs(ro,co):
            if ro<0 or ro>=row or co<0 or co>=col or grid[ro][co]!=1:
                return 0
            grid[ro][co]=0
            ans = 1
            ans+=dfs(ro+1,co)
            ans+=dfs(ro,co+1)
            ans+=dfs(ro-1,co)
            ans+=dfs(ro,co-1)
            return ans
        for ro in range(row):
            for co in range(col):
                if grid[ro][co]==1:
                    ans = max(ans,dfs(ro,co))

        return ans
