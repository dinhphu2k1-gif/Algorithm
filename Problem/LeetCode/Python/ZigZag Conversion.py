class Solution:
    def convert(self, s, numRows):
        if numRows == 1:
            return s
        arr = ["" for i in range(numRows)]

        row = 0
        step = 1
        for c in s:
            arr[row] += c 
            if row == 0: 
                step = 1
            elif row == numRows - 1:
                step = -1
            row += step

        return ''.join(arr)


test = Solution()
print(test.convert("PAYPALISHIRING", 3))
