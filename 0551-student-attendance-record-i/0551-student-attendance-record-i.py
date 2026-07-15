from collections import Counter
class Solution:
    def checkRecord(self, s: str) -> bool:
        ctr = Counter(s)
        if ctr["A"]>=2:
            return False
        elif 'LLL' in s:
            return False
        return True