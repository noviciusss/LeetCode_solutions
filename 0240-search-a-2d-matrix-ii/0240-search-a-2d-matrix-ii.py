class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        m, n = len(matrix),len(matrix[0])
        ro,co = 0,n-1
        while(ro<m and co>=0):
            val = matrix[ro][co]
            if target ==val:
                return True
            elif val>target:
                co -=1
            else:
                ro+=1
        return False