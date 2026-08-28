class Solution:
    def countServers(self, grid: List[List[int]]) -> int:
        row = len(grid)
        col = len(grid[0])
        # ans = 0
        # def dfs(r,c):
        #     if r<0 or r>=row or c<0 or c>=col or grid[r][c]==0:
        #         return 0
        #     grid[r][c]=0
        #     count  = 1
        #     count+=dfs(r,c+1)
        #     count+=dfs(r,c-1)
        #     count+=dfs(r+1,c)
        #     count+=dfs(r-1,c)
        #     return count
        # for r in range(row): 
        #     for c in range(col):
        #         if grid[r][c]==1:
        #             chk = dfs(r,c)
        #             if chk>1:
        #                 ans+=chk
        # return ans
        ro = [0]*row
        co = [0]*col
        for r in range(row):
            for c in range(col):
                if grid[r][c]==1:
                    ro[r]+=1
                    co[c]+=1
        ans= 0
        for r in range(row):
            for c in range(col):
                if grid[r][c]==1:
                    if ro[r]>1 or co[c]>1:
                        ans+=1
        return ans