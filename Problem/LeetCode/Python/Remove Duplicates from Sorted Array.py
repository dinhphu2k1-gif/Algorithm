class Solution:
    def removeDuplicates(self, nums) :
        n = len(nums)
        if n < 2: return n

        count = 1
        for i in range(1, n):
            if nums[i] != nums[i-1]:
                nums[count] = nums[i]
                count += 1
        # print(nums[:count])
        return count

test = Solution()
nums = [0,0,1,1,1,2,2,3,3,4]
print(test.removeDuplicates(nums))