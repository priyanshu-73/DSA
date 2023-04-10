class Solution:
	def plusOne(self, digits):
		digits = [str(i) for i in digits]
		a = ''.join(digits)
		b = int(a) + 1
		c = list(str(b))
		c = [int(i) for i in c]
		return c


L = Solution()
nums = [1, 0, 0]
print(L.plusOne(nums))