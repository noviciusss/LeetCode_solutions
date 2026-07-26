class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        n = len(heights)
        stack = []
        best = 0
        heights = heights+[0]
        for i , n in enumerate(heights):
            while stack and heights[stack[-1]]>n:
                top = stack.pop()
                heigh = heights[top]
                wid= i-stack[-1]-1 if stack else i
                best = max(best,heigh*wid)
            stack.append(i)
        return best