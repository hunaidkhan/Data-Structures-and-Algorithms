class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []
        for i in tokens:
            if i == "+": 
                first, second = stack.pop(), stack.pop()
                stack.append(int(second) + int(first))
            elif i == "-":
                first, second = stack.pop(), stack.pop()
                stack.append(int(second) - int(first))
            elif i == "*":
                first, second = stack.pop(), stack.pop()
                stack.append(int(second) * int(first))
            elif i == "/":
                first, second = stack.pop(), stack.pop()
                stack.append(int(second) / int(first))
            else:
                stack.append(i)
        return int(stack[-1])