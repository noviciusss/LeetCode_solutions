class Solution:
    def maxDepth(self, s: str) -> int:
        cnt = 0
        c = 0
        for i in s:
            if i=='(':
                cnt+=1
            elif i==')':
                if cnt>0:
                    cnt-=1
            c = max(cnt,c)
        return c
