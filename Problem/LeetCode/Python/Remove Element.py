class Solution:
    def removeElement(self, nums, val) :
        n = len(nums)
        if n < 1: return n 

        index = 0
        for i in range(n):
            if nums[i] != val:
                nums[index] = nums[i]
                index += 1
        # print(nums[:index])
        return index

test = Solution()
nums = [0,0,1,1,1,2,2,3,3,4]
print(test.removeElement(nums, 3))