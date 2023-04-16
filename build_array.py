class Solution(object):
    def buildArray(self, nums):
        li = []
        for i in range(len(nums)):
            a = nums[nums[i]]
            li.append(a)
        return li


a = Solution()
nums = [0,2,1,5,3,4]
print(a.buildArray(nums))