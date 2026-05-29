class Solution:
    def minElement(self, nums: List[int]) -> int:
        arr = []
        for ch in nums:
            num = 0
            for c in str(ch):
                num+=int(c)
            arr.append(num)
        return min(arr)