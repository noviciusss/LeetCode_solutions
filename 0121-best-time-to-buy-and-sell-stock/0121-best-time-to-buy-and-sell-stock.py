class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        mini = prices[0]
        maxpro = 0
        for i in range(1,len(prices)):
            cost =prices[i] - mini
            maxpro = max(maxpro,cost)
            mini = min(mini,prices[i])
        return maxpro