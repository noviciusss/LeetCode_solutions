class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        res = []
        path = []
        candidates.sort()
        def bt(star,remain):
            if remain==0:
                res.append(path[:])
                return
            if remain<0:
                return
            for i in range(star,len(candidates)):
                path.append(candidates[i])
                bt(i,remain-candidates[i])
                path.pop()
        bt(0,target)
        return res