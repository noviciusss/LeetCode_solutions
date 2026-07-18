class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        result = []
        path = []
        def bt(star):
            result.append(path[:])
            for i in range(star,len(nums)):
                path.append(nums[i])
                bt(i+1)
                path.pop()
        bt(0)
        return result