class Solution:
    def missingRolls(self, rolls, mean, n):
        sum = (len(rolls) + n) * mean
        remain = sum
        for roll in rolls:
            remain -= roll
        # print(remain)
        ans = []
        if (remain > 6 * n) or (remain < 1 * n):
            return ans
        else :
            while  n > 0:
                roll = remain // n
                ans.append(roll)
                remain -= roll
                n -= 1
            return ans

test = Solution()
rolls = [3,2,4,3]
print(test.missingRolls(rolls, 4, 2))
        