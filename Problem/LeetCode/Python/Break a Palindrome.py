class Solution:
    def breakPalindrome(self, palindrome):
        # n = len(palindrome)

        # res = ""
        # # print(1)
        # if n % 2 == 0:
        #     for i in range(n):
        #         if palindrome[i] > 'a':
        #             # palindrome[i] = "a"
        #             res += palindrome[0:i] + 'a' + palindrome[i+1:n]
        #             break 
        #         elif i == n-1:
        #             res += palindrome[0:n-1] + 'b'
        # else :
        #     for i in range(n):
        #         if i == n // 2: continue
        #         if palindrome[i] > 'a':
        #             res += palindrome[0:i] + 'a' + palindrome[i+1:n]
        #             break
        #         elif i == n-1:
        #             res += palindrome[0:n-1] + 'b'
        
        # return res
        N = len(palindrome)
        mid = int(N/2)
        res = ""
       
                
        if N is 1: return res
        
        for i, char in enumerate(palindrome[0:mid]):
            
            if (char != 'a'):
                res += 'a' + palindrome[i+1:N]
                return res
            else: 
                res += char
                
        return palindrome[:-1] + 'b'

test = Solution()
print(test.breakPalindrome("aba"))
