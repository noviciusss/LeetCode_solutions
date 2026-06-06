class Solution:
    def firstUniqChar(self, s: str) -> int:
        hashi = {}
        for c in s:
            hashi[c] = hashi.get(c,0)+1
        for i ,v in enumerate(s):
            if hashi[v]==1:
                return i
        return -1
       