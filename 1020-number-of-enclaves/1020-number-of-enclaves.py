class Solution:
    def numEnclaves(self, grid: List[List[int]]) -> int:
        row = len(grid)
        col = len(grid[0])
        ans = 0
        def dfs(r,c):
            if r<0 or r>=row or c<0 or c>=col or grid[r][c]==0:
                return
            grid[r][c]=0
            dfs(r+1,c)
            dfs(r,c+1)
            dfs(r-1,c)
            dfs(r,c-1)
        for r in range(row):
            if grid[r][0]==1:
                dfs(r,0)
            if grid[r][col-1]==1:
                dfs(r,col-1)
        for c in range(col):
            if grid[0][c]==1:
                dfs(0,c)
            if grid[row-1][c]==1:
                dfs(row-1,c)
        for r in range(row):
            for c in range(col):
                if grid[r][c]==1:
                    ans+=1 
        return ans


