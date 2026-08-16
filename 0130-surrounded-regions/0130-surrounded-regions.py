from collections import deque
class Solution:
    def solve(self, board: List[List[str]]) -> None:
        """
        Do not return anything, modify board in-place instead.
        """
        row = len(board)
        col = len(board[0])
        que = deque()
        move = [(0,1),(0,-1),(-1,0),(1,0)]
        for r in range(row):
            for c in range(col):
                if (r==0 or r==row-1 or c==0 or c==col-1)and board[r][c]=='O':
                    board[r][c]='E'
                    que.append((r,c))

        while que:
            ro , co = que.popleft()
            for r,c in move:
                n = r+ro
                l = c+co
                if 0<= n < row and 0 <= l< col and board[n][l]=='O':
                    board[n][l]='E'
                    que.append((n,l))
        for r in range(row):
            for c in range(col):
                if board[r][c]=='O':
                    board[r][c]='X'
                if board[r][c]=='E':
                    board[r][c]='O'
        