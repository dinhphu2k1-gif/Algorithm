class Solution:
    def maxNumberOfBalloons(self, text: str) -> int:
        from collections import defaultdict
        arr = defaultdict(int)
        # n = len(text)

        for c in text:
             arr[c] += 1;

        res = 1000000
        for c in ['b', 'a', 'n']:
            res = min(res, arr[c])
        for c in ['l', 'o']:
            res = min(res, arr[c] // 2)
        
        # print(arr)

        return res

test = Solution()
print(test.maxNumberOfBalloons("nlaebolko"))