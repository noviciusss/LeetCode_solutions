class Solution:
    def islandPerimeter(self, grid: List[List[int]]) -> int:
        row = len(grid)
        col = len(grid[0])
        ans =0
        for ro in range(row):
            for co in range(col):
                if grid[ro][co]==1:
                    ans+=4
                    if ro+1<row and grid[ro+1][co]==1:
                        ans-=2
                    if co+1<col and grid[ro][co+1]==1:
                        ans-=2

        return ans