class Solution:
    def isHappy(self, n: int) -> bool:
        seen = set()
        while n!=1:
            curr_sum =0
            for ch in str(n):
                curr_sum += int(ch)**2
            if curr_sum in seen:
                return False
            seen.add(curr_sum)
            n = curr_sum
        return True