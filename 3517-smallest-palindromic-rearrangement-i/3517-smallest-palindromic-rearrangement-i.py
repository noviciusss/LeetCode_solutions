class Solution:
    def smallestPalindrome(self, s: str) -> str:
        n = len(s)
        sorti = sorted(s[:n//2])
        mid = [s[n//2]] if n%2 else []
        return "".join(sorti + mid+ sorti[::-1])
