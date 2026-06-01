from collections import Counter
class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        nums.sort()
        maxi = 1
        cnt = 1
        if not nums:
            return 0
        for i in range(1,len(nums)):
            if(nums[i] ==nums[i-1]+1):
                cnt+=1  
            elif nums[i] == nums[i - 1] :
                continue 
            else:
                cnt=1
            maxi = max(maxi,cnt)
        return maxi