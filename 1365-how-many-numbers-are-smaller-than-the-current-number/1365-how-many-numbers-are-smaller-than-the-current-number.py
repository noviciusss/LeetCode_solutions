class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        srted = sorted(nums)
        return [srted.index(x) for x in nums]