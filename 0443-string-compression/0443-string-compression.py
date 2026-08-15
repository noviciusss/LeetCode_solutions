from collections import Counter
class Solution:
    def compress(self, chars: List[str]) -> int:
       wrt = 0
       red = 0
       n = len(chars)
       while red<n:
        char= chars[red]
        count =0
        while red<n and chars[red]==char:
            red+=1
            count+=1
        chars[wrt] =char
        wrt+=1
        if count>1:
         for dig in str(count):
            chars[wrt] = dig
            wrt+=1
       return wrt
        
