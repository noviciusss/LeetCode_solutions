import math
class Solution:
    def gcdOfOddEvenSums(self, n: int) -> int:
        odd = 1
        even = 2
        sumOdd = 0
        sumEven = 0
        for i in range(n):
            sumOdd+=odd
            odd+=2
            sumEven+=even
            even+=2
        return math.gcd(sumOdd,sumEven)