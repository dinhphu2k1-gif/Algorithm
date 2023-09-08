class Solution:
    def countSquares(self, A) -> int:
        # m = len(matrix)
        # n = len(matrix[0])

        # res = 0

        # for i in range(m):
        #     for j in range(n):
        #         if matrix[i][j] == 1:
        #             matrix[i][j] += 1
        #             res += 1
        # # print(matrix)

        # for x in range(1, min(m, n)):
        #     tmp = 0
        #     for i in range(x, m):
        #         for j in range(x, n):
        #             if matrix[i][j] >= x + 1 and matrix[i-1][j] >= x + 1 and matrix[i][j-1] >= x + 1 and matrix[i-1][j-1] >= x + 1: 
        #                 matrix[i][j] += 1
        #                 tmp += 1
        #     res += tmp
        #     # print(res, tmp)
        # # print(matrix)
        # return res  
        for i in range(1, len(A)):
            for j in range(1, len(A[0])):
                A[i][j] = min(A[i - 1][j], A[i][j - 1], A[i - 1][j - 1]) + 1
        print(A)
        return sum(map(sum, A))

matrix = [
            [0,1,1,1],
            [1,1,1,1],
            [0,1,1,1]
            ]
test = Solution()
print(test.countSquares(matrix))
