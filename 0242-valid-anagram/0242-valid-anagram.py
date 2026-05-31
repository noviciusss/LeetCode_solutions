from collections import Counter
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s)!=len(s):
            return False
        return Counter(s)==Counter(t)