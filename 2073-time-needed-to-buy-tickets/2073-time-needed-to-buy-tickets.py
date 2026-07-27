class Solution:
    def timeRequiredToBuy(self, tickets: List[int], k: int) -> int:
        ans = 0
        for i,n in enumerate(tickets):
            if i<=k:
                ans+=min(n,tickets[k])
            else:
                ans+=min(n,tickets[k]-1)
        return ans