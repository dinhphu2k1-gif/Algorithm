class Solution:
    def maxSubArray(self, nums) -> int:
        res = nums[0]
        max_end = nums[0]

        for i in range(1, len(nums)):
            max_end = max(max_end + nums[i], nums[i])
            
            res = max(res, max_end)

        return res  

test = Solution()
print(test.maxSubArray( [-2,1,-3,4,-1,2,1,-5,4]))
