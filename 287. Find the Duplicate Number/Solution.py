class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        slow, fast = nums[0], nums[0]
        index = 0
        while True:
            slow = nums[slow]
            fast = nums[nums[fast]]
            if slow == fast:
                break
        slow2 = nums[0]
        while slow2 != fast:
            slow2 = nums[slow2]
            fast = nums[fast]
        return fast
