class Solution:
    def smallestIndex(self, nums: List[int]) -> int:
        for i in range(len(nums)):
                num = 0
                chk = nums[i]
                while chk>0:
                    num+= chk%10
                    chk = chk//10
                if num==i:
                    return i
        return -1