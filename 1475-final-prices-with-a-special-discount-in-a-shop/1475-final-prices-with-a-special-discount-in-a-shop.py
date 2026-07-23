
class Solution:
    def finalPrices(self, prices: List[int]) -> List[int]:
        stack = []
        ans = prices.copy()
        for i,n in enumerate(prices):
         while stack and prices[stack[-1]]>=n:
             ans[stack.pop()]-=n
         stack.append(i)
        return ans