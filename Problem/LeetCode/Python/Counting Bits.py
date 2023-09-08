class Solution:
    def countBits(self, n):
        if n == 0: return [0]

        res = [0, 1]
        mark = 2
        for i in range(2, n + 1):
            # print(i)
            if i == mark: 
                res.append(1)
                mark *= 2
            else :
                t = mark // 2
                # print(t)
                # print(len(res))
                res.append(res[t] + res[i - t])

        return res   

test = Solution()
print(test.countBits(5))
                
