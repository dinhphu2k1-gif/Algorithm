class Solution:
    def minCostClimbingStairs(self, cost):
        n = len(cost)
        arr = []
        arr.append(cost[0])
        arr.append(cost[1])
        for i in range(2, n):
            arr.append(min(arr[i-1], arr[i-2]) + cost[i])

        # print(arr)
        return min(arr[n-1], arr[n-2])

cost = [1,100,1,1,1,100,1,1,100,1]
test = Solution()
print(test.minCostClimbingStairs(cost))