class Solution:
    def jump(self, nums: List[int]) -> int:
        maxi = 0
        jump = 0
        end = 0
        for i in range(len(nums)-1):
            maxi = max(maxi,i+nums[i])
            if  i ==end:
                jump +=1
                end =maxi
                if maxi>=(len(nums)-1):
                    break
        return jump