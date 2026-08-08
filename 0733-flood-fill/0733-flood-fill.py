class Solution:
    def floodFill(self, image: List[List[int]], sr: int, sc: int, color: int) -> List[List[int]]:
        row = len(image)
        col = len(image[0])
        chk = image[sr][sc]
        def dfs(ro,co):
            if ro<0 or ro>=row or co<0 or co>=col or image[ro][co]!=chk or image[ro][co]==color:
                return 
            image[ro][co]=color
            dfs(ro+1,co)
            dfs(ro-1,co)
            dfs(ro,co+1)
            dfs(ro,co-1)


        for ro in range(row):
            for co in range(col):
                if ro == sr and co ==sc:
                    dfs(ro,co)
        return image