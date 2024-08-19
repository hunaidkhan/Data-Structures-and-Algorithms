class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        res = 0
        stack = []
        for i in range(len(heights)):
            
            idx = i
            while stack and stack[-1][0] > heights[i]:
                val , idx = stack.pop()
                res = max(res , val * (i - idx))
            stack.append([heights[i],idx])
            
        for i in stack:
            res = max(res , (len(heights) - i[1]) * i[0])
      
        return res

