class Solution:
    def longestPalindrome(self, s: str) -> str:
        n = len(s)

        ans = ""
        len_ans = len(ans)

        #for string with odd lengths
        for i in range(n):
            d = 1
            while i - d >= 0 and i + d < n :
                if s[i-d] == s[i+d]:
                    d += 1
                else: break

            tmp = s[i-d+1 : i+d]
            if len(tmp) > len_ans:
                ans = tmp 
                len_ans = len(ans)

        # for string with even lengths
        for i in range(n):
            d = 0
            while i - d >= 0 and i + d + 1 < n :
                if s[i-d] == s[i+d+1] :
                    d += 1
                else: break

            tmp = s[i-d+1 : i+d+1]
            if len(tmp) > len_ans:
                ans = tmp 
                len_ans = len(ans)
        
        return ans

test = Solution()
print(test.longestPalindrome("aabbcdbbaa")) 