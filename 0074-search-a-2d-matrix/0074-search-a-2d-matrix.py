class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        m ,n = len(matrix),len(matrix[0])
        lo,hi = 0,(m*n)-1
        while lo<=hi:
            mid = lo + (hi-lo)//2
            row ,col = mid//n ,mid%n
            val = matrix[row][col]
            if target == val:
                return True
            elif target> val:
                lo = mid+1
            else:
                hi = mid-1
        return False