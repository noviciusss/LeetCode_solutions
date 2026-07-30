class Solution:
    def sortSentence(self, s: str) -> str:
        word = s.split()
        res = [None]*len(word)

        for w in word:
            idx = int(w[-1])-1
            res[idx] = w[:-1]
        return " ".join(res)