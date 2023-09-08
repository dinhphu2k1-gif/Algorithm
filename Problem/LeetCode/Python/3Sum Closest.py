class Solution:
    def threeSumClosest(self, nums, target) :
        min_distance = 10000000
        n = len(nums)
        nums = sorted(nums)
        ans = 0

        for i in range(n-2):
            if i > 0 and nums[i] == nums[i-1]:
                continue
        
            L = i + 1
            R = n - 1
            while L < R:
                sum = nums[i] + nums[L] + nums[R] - target
                if abs(sum) < min_distance:
                    min_distance = abs(sum)
                    ans = sum + target  
                    print(ans)
                if sum < 0:
                    L += 1
                elif sum > 0:
                    R -= 1
                else :
                    return ans

        return ans 

test = Solution()
nums = [0, 1, 2]
print(test.threeSumClosest(nums, 3))
