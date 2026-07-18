class Solution:
    def combinationSum2(self, candidates: List[int], target: int) -> List[List[int]]:
     candidates.sort()
     res = []
     path = []
     def bt(start,remain):
        if remain==0:
            res.append(path[:])
            return
        if remain<0:
            return 
        for i in range(start,len(candidates)):
            if i>start and candidates[i]==candidates[i-1]:
                 continue
            path.append(candidates[i])
            bt(i+1,remain-candidates[i])
            path.pop()
     bt(0,target)
     return res