class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        nums.sort()
        left =0
        mid = 0
        right = len(nums)-1
        if(len(nums)==1):return nums[0]
        while(left<=right):
            mid = left+(right-left)//2
            return nums[mid]