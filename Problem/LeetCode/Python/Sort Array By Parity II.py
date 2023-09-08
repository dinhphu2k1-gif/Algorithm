class Solution:
    def sortArrayByParityII(self, nums):
        n= len(nums)
        nums_odd = []
        nums_even = []

        for num in nums:
            if num % 2 == 0:
                nums_even.append(num)
            else :
                nums_odd.append(num)
        i, j = 0, 0
        res = [] 
        for index in range(n):
            if index % 2 == 0:
                res.append(nums_even[i])
                i += 1
            else :
                res.append(nums_odd[j])
                j += 1

        return res

test = Solution()
nums = [4,1,2,1]
print(test.sortArrayByParityII(nums))
        