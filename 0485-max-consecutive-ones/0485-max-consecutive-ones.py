class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        ans = 0
        chk = 0
        for i in nums:
            if i ==1:
                chk+=1
            ans = max(ans,chk)
            if i==0:
                chk=0
        return ans