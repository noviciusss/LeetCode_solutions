class Solution:
    def buildArray(self, target: List[int], n: int) -> List[str]:
       arr = []
       curr = 1
       for i in target:
        while curr < i:
            arr.append('Push')
            arr.append('Pop')
            curr+=1
        arr.append('Push')
        curr+=1
       return arr