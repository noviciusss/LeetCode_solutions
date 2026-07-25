class Solution:
    def maxProduct(self, n: int) -> int:
        chal = str(n)
        maxi = -1
        secmaxi = -1
        for i in chal:
           dig = int(i)
           if dig>maxi:
            secmaxi = maxi
            maxi = dig
           elif dig>secmaxi:
            secmaxi = dig
        return int(maxi)*int(secmaxi)