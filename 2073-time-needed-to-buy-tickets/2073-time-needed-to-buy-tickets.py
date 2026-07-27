class Solution:
    def timeRequiredToBuy(self, tickets: List[int], k: int) -> int:
        ans = 0
        for i,n in enumerate(tickets):
            if i<=k:
                ans+=min(n,tickets[k]) # if early then will be taken all if less then k else till k
            else:
                ans+=min(n,tickets[k]-1) # if after k then will run for 1 less then k as k end early means less than k then then whole or k-1
        return ans