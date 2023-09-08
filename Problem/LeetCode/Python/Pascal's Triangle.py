class Solution:
    def generate(self, numRows):
        res = []
        res.append([1])
        for i in range(1, numRows):
            row = []
            for j in range(0, i + 1):
                # print(i, j)
                if j == 0 or j == i:
                    row.append(1)
                else:

                    row.append(res[i-1][j] + res[i-1][j-1])
            res.append(row)
        return res

test = Solution()
print(test.generate(5))