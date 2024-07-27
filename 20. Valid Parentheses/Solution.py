class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        bracks = {")": "(", "}": "{", "]": "["}
        for c in s:
            if c in bracks:
                if len(stack) > 0 and bracks[c] == stack[-1] :
                    stack.pop()
                else:
                    return False
            else:
                stack.append(c) 
        return True if len(stack) == 0 else False