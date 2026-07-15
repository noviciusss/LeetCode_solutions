class Solution:
    def reverseWords(self, s: str) -> str:
        chars = s.split()
        chars = chars[::-1]
        return " ".join(chars)