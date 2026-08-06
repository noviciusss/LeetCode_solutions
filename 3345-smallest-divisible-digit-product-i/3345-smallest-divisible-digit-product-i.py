class Solution:
    def smallestNumber(self, n: int, t: int) -> int:
        while True:
            temp = n
            chk = 1
            while temp>0:
                chk *= temp%10
                temp = temp//10
            if chk%t==0:
                return n
            n+=1