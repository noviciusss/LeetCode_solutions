class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        # for i in range(0,len(nums)):
        #     nums[i] = nums[i]**2
        # nums.sort()
        # return nums 

        result =[0]*len(nums)
        left = 0
        right = len(nums)-1
        for i in range(len(nums)-1,-1,-1):
            if abs(nums[left])>abs(nums[right]):
                result[i] = nums[left]**2
                left+=1
            else:
                result[i]=nums[right]**2
                right-=1
        return result