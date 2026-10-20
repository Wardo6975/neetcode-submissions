class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        l, r = 0, 1 #left is sell right is buy
        maxP = 0 #initializing max profit
        while r < len(prices):
            #checking prices
            if prices[l] < prices[r]:
                profit = prices[r] - prices[l]
                maxP = max(maxP, profit)
            else: 
                l = r
            r += 1
        return maxP
            
