class Solution:
    def subarraysDivByK(self, nums: List[int], k: int) -> int:
        count = 0
        prefix_sum = 0
        seen ={0:1}
        for i in nums:
            prefix_sum =(prefix_sum + i)%k
            count+= seen.get(prefix_sum,0)
            seen[prefix_sum] = seen.get(prefix_sum,0)+1

        return count