class Solution:
    def climbStairs(self, n: int) -> int:
        staircase = [1, 1]
        if n == 1: return 1
        for i in range(2, n+1):
            staircase.append(staircase[i-1] + staircase[i-2])

        return staircase[n]

test = Solution()
print(test.climbStairs(3))