import heapq 
class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
        max_heap = [-n for n in stones]
        heapq.heapify(max_heap)
        while len(max_heap)>1:
            fir = -heapq.heappop(max_heap)
            sec = -heapq.heappop(max_heap)
            if fir != sec:
                heapq.heappush(max_heap,-(fir-sec))
        
        return 0 if not max_heap else -(max_heap[0])