class Solution:
    def maxLength(self, A):
        dp = [set()]
        for a in A:
            if len(set(a)) < len(a): continue
            a = set(a)
            for c in dp[:]:
                print(a , c , a & c)
                if a & c: continue
                dp.append(a | c)
        print(dp)
        return max(len(a) for a in dp)

arr = ["un","iq","ue"]
test = Solution()
print(test.maxLength(arr))