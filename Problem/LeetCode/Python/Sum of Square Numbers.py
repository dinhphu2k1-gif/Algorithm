class Solution:
    def judgeSquareSum(self, c: int) -> bool:
        A = [x**2 for x in range(46341)]
        mark = 0
        left = 0;
        right = 46340

        while left <= right:
            val = A[left] + A[right]
            if val == c:
                mark = 1
                break;
            elif val < c:
                left += 1
            else :
                right -= 1

        if mark == 0:
            return False
        else:
            return True

test = Solution()
print(test.judgeSquareSum(2))