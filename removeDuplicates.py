class Solution(object):
    def removeDuplicates(self, nums: list[int]):
        a = []
        for i in range(1, len(nums)):
            if nums[i] == nums[i-1]:
                continue
            a.append(nums[i])
        return a


a = Solution()
nums = [0,0,1,1,1,2,2,3,3,4]
print(a.removeDuplicates(nums))

