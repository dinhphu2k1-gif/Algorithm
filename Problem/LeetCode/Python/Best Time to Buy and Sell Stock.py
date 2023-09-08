class Solution:
    def maxProfit(self, prices):
        maxprofit = 0
        minprices = prices[0]

        for i in range(1, len(prices)):
            if prices[i] < minprices:
                minprices = prices[i]
            
            maxprofit = max(maxprofit, prices[i] - minprices)

        return maxprofit

prices = [7,1,5,3,6,4]
test = Solution()
print(test.maxProfit(prices))
