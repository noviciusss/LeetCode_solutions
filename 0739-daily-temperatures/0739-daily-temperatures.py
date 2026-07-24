class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        n = len(temperatures)
        stack = []
        ans = [0]*n
        for i,tmp in enumerate(temperatures):
            while stack and tmp>temperatures[stack[-1]]:
                chk =  stack.pop()
                ans[chk] =i-chk 
            stack.append(i)
        return ans
