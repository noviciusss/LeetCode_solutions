class Solution:
    def removeOuterParentheses(self, s: str) -> str:
      ans = ""
      chk = 0
      for i in s:
        if i =='(':
            if chk>0:
                ans+=i
            chk+=1
        else:
            chk-=1
            if chk>0:ans+=i
      return ans