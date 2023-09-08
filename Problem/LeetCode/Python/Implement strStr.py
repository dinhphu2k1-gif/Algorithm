class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        m = len(haystack)
        n = len(needle)
        if n == 0 or haystack == needle: return 0

        for i in range(m-n + 1): 
            if haystack[i:i+n] == needle:
                return i
        return -1

test = Solution()
print(test.strStr("abc", "c"))
