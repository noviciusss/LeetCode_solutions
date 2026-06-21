class Solution:
    def maxIceCream(self, costs: List[int], coins: int) -> int:
        costs.sort()
        ans = 0
        chk= 0
        for i in costs:
            chk+=1
            ans+=i
            if ans>coins:
                ans-=i
                chk-=1
                return chk
        return chk