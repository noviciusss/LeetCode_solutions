class Solution:
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        res = []
        path = []
        nums.sort()
        def bt(star:int):
            res.append(path[:])
            for i in range(star,len(nums)):
                if i>star and nums[i]==nums[i-1]:
                    continue
                path.append(nums[i])
                bt(i+1)
                path.pop()
        bt(0)
        return res