class Solution:
    def separateDigits(self, nums: List[int]) -> List[int]:
        arri =[]
        for ch in nums:
            for an in str(ch):
                arri.append(int(an))
        return arri