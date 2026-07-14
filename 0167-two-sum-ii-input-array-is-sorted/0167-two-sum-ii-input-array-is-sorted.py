class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        lo = 0
        hi = len(numbers)-1
        while lo<=hi:
            chk = numbers[lo]+numbers[hi]

            if chk ==target :
                return [lo+1,hi+1]
            elif chk>target:
                hi-=1
            else:
                lo+=1
        return [-1,-1]