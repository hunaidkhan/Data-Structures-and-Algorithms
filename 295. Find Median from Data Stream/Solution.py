class MedianFinder:

    def __init__(self):
        self.nums = []

    def addNum(self, num: int) -> None:
        self.nums.append(num)
  

    def findMedian(self) -> float:
        self.nums = sorted(self.nums)
        length = len(self.nums)
        if length % 2 == 0:
            return (self.nums[length//2] + self.nums[length//2 - 1]) / 2
        else:
            return self.nums[length//2]


# Your MedianFinder object will be instantiated and called as such:
# obj = MedianFinder()
# obj.addNum(num)
# param_2 = obj.findMedian()