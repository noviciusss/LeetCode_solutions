class Solution:
    def solve(self, board: List[List[str]]) -> None:
        """
        Do not return anything, modify board in-place instead.
        """
        
        row = len(board)
        col = len(board[0])
        def dfs(ro,co): # marking the 0 at eadges to e to make it safe
          if ro<0 or ro>=row or co<0 or co>=col or board[ro][co]!='O':
            return 
          board[ro][co] = 'E' # so any cell connected to eadge cell is also safe 
          dfs(ro-1,co)
          dfs(ro+1,co)
          dfs(ro,co+1)
          dfs(ro,co-1)
        for ro in range(row):
            for co in range(col):
                if (ro==0 or ro == row-1 or co == 0 or co == col-1 ) and board[ro][co]=='O':
                    dfs(ro,co)
        for ro in range(row):
            for co in range(col):
                if board[ro][co]=='O':
                    board[ro][co]='X'
                if board[ro][co]=='E':
                    board[ro][co]='O'

        