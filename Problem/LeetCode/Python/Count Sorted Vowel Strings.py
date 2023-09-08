class Solution:
    def countVowelStrings(self, n: int) -> int:
        res = 0
        a, e, i, o, u = 1, 0, 0, 0, 0
        for _ in range(n):
            a = 1
            e = e + a
            i = i + e
            o = o + i
            u = u + o
            # print(a, e, i, o, u)
            res = a + e + i + o + u
        return res    

test = Solution()
print(test.countVowelStrings(3))