class Solution:
    def gridGame(self, grid):
        n = len(grid[0])

        i, j = 1, n-1
        while j != 0 or i != 0:
            # print(i, j)
            grid[i][j] = 0
            if i == 1:
                if grid[i-1][j] > grid[i][j-1]:
                    i -= 1 
                else :
                    j -= 1
            else :
                j -= 1
            # print(i, j)

        grid[0][0] = 0
        res = 0
        # print(i, j)
        while i != 1 or j != n-1:
            print(i, j)
            res += grid[i][j]
            if i == 0:
                if grid[i+1][j] > grid[i][j+1]:
                    i += 1
                else :
                    j += 1
            else :
                j += 1
            
        print(grid)
        return res  

test = Solution()
grid = [[2,5,4],[1,5,1]]
print(test.gridGame(grid))

