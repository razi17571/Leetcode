from typing import List
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashtable = {}
        for i in range(len(nums)):
            if target - nums[i] in hashtable:
                return [hashtable[target - nums[i]],i]
            hashtable[nums[i]] = i
p = Solution()
print(p.twoSum(nums = [3,2,4], target = 6))