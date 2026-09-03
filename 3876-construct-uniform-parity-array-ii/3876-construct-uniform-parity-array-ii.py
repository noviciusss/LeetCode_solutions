class Solution:
    def uniformArray(self, nums1: list[int]) -> bool:
        ev = 0
        od = 0
        for i in nums1:
            if i%2==0:
                ev+=1
            else:
                od+=1
        if (ev>0 and od==0) or (ev==0 and od>0):
            return True
        mini = min(nums1)
        if mini%2!=0:
            return True
        return False