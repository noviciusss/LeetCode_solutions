class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        stack = []
        n = len(temperatures)
        ans = [0]*n
        for i, temp in enumerate(temperatures):
            while stack and temp>temperatures[stack[-1]]:
                prev= stack.pop()
                ans[prev] = i-prev
            stack.append(i)
        return ans