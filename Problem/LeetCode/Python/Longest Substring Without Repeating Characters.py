class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if len(s) == 0: return 0
        
        i = j = 0
        longest = 0
        unique = defaultdict(int)
        while j < len(s):
            c = s[j]
            j += 1
            unique[c] += 1
            
            while unique[c] > 1:
                d = s[i]
                i += 1
                unique[d] -= 1
                
            longest = max(longest, j - i)

        
        return longest