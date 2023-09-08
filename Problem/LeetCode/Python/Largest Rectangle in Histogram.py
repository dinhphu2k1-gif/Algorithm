class Solution:
    def largestRectangleArea(self, height):
        height.append(0)
        stack = [-1]
        ans = 0
        for i in range(len(height)):
            while height[i] < height[stack[-1]]:
                h = height[stack.pop()]
                w = i - stack[-1] - 1
                ans = max(ans, h * w)
            stack.append(i)
            print(stack)
        height.pop()
        return ans

test = Solution()
height = [2, 1, 4, 5, 3, 1,3]
print(test.largestRectangleArea(height))
