class Solution:
	def three_sums(self, nums: list[int]) -> list[list[int]]:
		a = []
		for i in range(len(nums)):
			for j in range(i + 1, len(nums)):
				for k in range(j + 1, len(nums)):
					if i != j and i != k and j != k and nums[i] + nums[j] + nums[k] == 0:
						li = [nums[i], nums[j], nums[k]]
						for i in range(len(a)):
							if nums[i] == nums[i-2]:
								continue
						a.append(li)
		return a


a = Solution()
nums1 = [-1,0,1,2,-1,-4]
print(a.three_sums(nums1))