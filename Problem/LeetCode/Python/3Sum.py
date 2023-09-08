class Solution:
    def threeSum(self, nums):
        n = len(nums)
        nums = sorted(nums)
        res = []

        for i in range(n-2):
            if i > 0 and nums[i] == nums[i-1]:
                continue
            L = i + 1
            R = n - 1
            while L < R:
                # print(i, L, R)
                sum = nums[i] + nums[L] + nums[R]
                if sum < 0:
                    L += 1
                elif sum > 0:
                    R -= 1
                else :
                    res.append([nums[i], nums[L], nums[R]])
                    while L < R and nums[L] == nums[L+1]:
                        L += 1
                    while L < R and nums[R] == nums[R-1]:
                        R -= 1
                    L += 1
                    R -= 1

        return res;

test = Solution()
print(test.threeSum([-1,0,1,2,-1,-4]))