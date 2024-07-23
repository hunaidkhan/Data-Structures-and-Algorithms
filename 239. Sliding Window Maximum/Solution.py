class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        l, r = 0, 0
        output = []
        deq = collections.deque()
        while r < len(nums):
            while deq and nums[r] > nums[deq[-1]]:
                deq.pop()
            deq.append(r)
            if l > deq[0]:
                deq.popleft()
            if r+1 >= k:
                output.append(nums[deq[0]])
                l+=1
            
            r += 1
        return output