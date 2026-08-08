class Solution:
    def closedIsland(self, grid: List[List[int]]) -> int:
        row = len(grid)
        col = len(grid[0])
        ans = 0
        def dfs(ro,co):
            if ro<0  or ro>= row or co <0 or co>= col:
                return False
            
            if grid[ro][co]==1:
                return True
            grid[ro][co]=1
            up = dfs(ro+1,co) 
            down =  dfs(ro-1,co) 
            right = dfs(ro,co+1) 
            left = dfs(ro,co-1)
            return up and down and right and left




        for ro in range(row):
            for co in range(col):
                if grid[ro][co]!=1:
                     if dfs(ro,co):
                        ans+=1
        
        return ans