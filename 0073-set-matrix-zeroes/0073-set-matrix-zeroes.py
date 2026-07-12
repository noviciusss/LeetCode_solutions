class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        m , n = len(matrix),len(matrix[0])
        row,col = set(),set()

        for r in range(m):
            for c  in range(n):
                if matrix[r][c]==0:
                    row.add(r)
                    col.add(c)

        for r in range(m):
            for c in range(n):
                if r in row or c in col:
                    matrix[r][c]=0