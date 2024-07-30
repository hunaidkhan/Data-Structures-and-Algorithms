class Solution:
    def minimumDeletions(self, s: str) -> int:
        res, count = 0, 0
        for i in s:
            if i == 'b':
                count+=1
            elif count>0:
                res+=1
                count -= 1
        return res