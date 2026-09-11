import itertools
class Solution:
    def totalNumbers(self, digits: List[int]) -> int:
        uni =set()
        for a,b,c in itertools.permutations(digits,3):
            chk = 0
            if a!=0 and c%2==0:
                chk +=a*100
                chk +=b*10
                chk+=c
                uni.add(chk)
        return len(uni)