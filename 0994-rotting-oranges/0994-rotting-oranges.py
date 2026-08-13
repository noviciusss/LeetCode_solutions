from collections import deque
class Solution:
    def orangesRotting(self, grid: List[List[int]]) -> int:
        dir = [(0,-1),(0,1),(1,0),(-1,0)]
        qu = deque()
        row = len(grid)
        col = len(grid[0])
        fr = 0
        ans = 0
        for r in range(row):
            for c in range(col) :
                if grid[r][c] ==2:
                    qu.append((r,c))
                elif grid[r][c]==1:
                   fr +=1
        while qu and fr>0:
            for _ in range(len(qu)):
                ro ,co =qu.popleft() 
                for r,c in dir:
                    n = ro+r
                    l = co+c

                    if 0<=n<row and 0<=l<col and grid[n][l]==1:
                        grid[n][l]=2
                        qu.append((n,l))
                        fr-=1
            ans+=1
        return ans if fr == 0 else -1

                