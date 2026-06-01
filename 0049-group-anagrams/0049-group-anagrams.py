from collections import defaultdict
class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        ana= defaultdict(list)

        for s in strs:
            sorte = "".join(sorted(s))
            ana[sorte].append(s)
        return list(ana.values())