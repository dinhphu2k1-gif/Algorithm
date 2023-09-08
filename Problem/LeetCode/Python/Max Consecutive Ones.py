class Solution:
    def findMaxConsecutiveOnes(self, nums):
        res = 0
        consec_one = 0
        for i in nums:
            if i == 1:
                consec_one += 1
            else :
                consec_one  = 0
            res = max(res, consec_one)

        return res

nums = [1,1,0,1,1,1]
test = Solution()
print(test.findMaxConsecutiveOnes(nums))
