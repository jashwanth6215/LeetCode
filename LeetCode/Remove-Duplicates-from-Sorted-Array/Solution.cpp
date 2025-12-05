1class Solution:
2    def removeDuplicates(self, nums: List[int]) -> int:
3        li=list(set(nums))
4        del nums[:]
5        nums.extend(li)
6        nums.sort()
7        return len(nums)