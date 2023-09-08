class Solution:
    def minimumMoves(self, s):
        count = 0
        prev = 0
        cur = 0
        n = len(s)
        while cur < n:
            while cur < n and s[cur] == 'O':
                cur += 1
            prev = cur    

            while cur < n and cur - prev < 3:
                cur += 1
            if prev == n: break
            if s[prev] != 'O':
                count += 1
        return count

test = Solution()
print(test.minimumMoves("XXOX"))

