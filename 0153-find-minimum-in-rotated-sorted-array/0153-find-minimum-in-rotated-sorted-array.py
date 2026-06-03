class Solution:
    def findMin(self, nums: List[int]) -> int:
        r = len(nums)-1
        l = 0
        while(l<r):
            mid = l+(r-l)//2
            if nums[mid]<nums[r]:
                r = mid
            else:
                l=mid+1

        return nums[l]