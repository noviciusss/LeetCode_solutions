class Solution:
    def defangIPaddr(self, address: str) -> str:
        # n = len(address)
        # arr = []
        # for i in address:
        #     if i is '.':
        #         arr.append('[.]')
        #     else:
        #         arr.append(i)
        # return "".join(arr)
        return address.replace('.','[.]')