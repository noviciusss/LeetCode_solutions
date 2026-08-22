class Solution:
    def checkDivisibility(self, n: int) -> bool:
        add = 0
        mul = 1 
        for i in str(n):
            add= add+ int(i)
            mul = mul *int(i)
        if n%(add+mul)==0:
            return True
        return False 