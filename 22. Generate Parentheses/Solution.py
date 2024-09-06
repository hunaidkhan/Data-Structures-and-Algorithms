class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        res = []
        def solution(sentence, left, right):
            if len(sentence) == n*2:
                res.append(sentence)
                return
            if left < n:
                solution(sentence+'(', left+1, right)
            if right < left:
                solution(sentence+')', left, right+1)
        solution('', 0, 0)
        return res