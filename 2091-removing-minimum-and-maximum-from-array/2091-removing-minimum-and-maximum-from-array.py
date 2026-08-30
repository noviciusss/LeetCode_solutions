class Solution:
    def minimumDeletions(self, nums: List[int]) -> int:
        ans = 0
        n = len(nums)
        if n<=2:
            return n
        mini = nums.index(min(nums))
        maxi = nums.index(max(nums))
        i = min(mini,maxi)
        j = max(mini,maxi)

        fr = j+1
        back = n-i
        both = (i+1)+(n-j)

        return min(fr,back,both)