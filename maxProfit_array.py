class Solution(object):
    def maxProfit(self, prices: list[int]) -> int:
        profit = 0
        for curr in range(1, len(prices)):
            if prices[curr] > prices[curr-1]:
                profit += prices[curr] - prices[curr-1]
        return profit


a = Solution()
prices = [7, 1, 5, 3, 6, 4]
print(a.maxProfit(prices))