class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:   
        prevCount = {}
        
        for index, value in enumerate(nums):
            second_val = target - value
            if second_val in prevCount:
                return [prevCount[second_val], index]
            prevCount[value] = index

        return 
