class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        rows = len(grid)
        col = len(grid[0])
        ans = 0
        def dfs(ro,co):
            if ro<0 or ro>=rows or co <0 or co >=col or grid[ro][co]!='1':
                return 
            grid[ro][co] = '0'
            dfs(ro+1,co)
            dfs(ro-1,co)
            dfs(ro,co+1)
            dfs(ro,co-1)
        for ro in range(rows):
            for co in range(col):
                if grid[ro][co]=='1':
                    ans+=1
                    dfs(ro,co)
        return ans
