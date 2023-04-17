class Solution(object):
    def maximumWealth(self, accounts):
        large = 0
        for i in accounts:
            large = max(sum(i), large)
        return large


a = Solution()
accounts = [[1, 2, 3], [3, 2, 1]]
print(a.maximumWealth(accounts))
