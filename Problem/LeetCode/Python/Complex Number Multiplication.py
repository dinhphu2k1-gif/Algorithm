class Solution:
    def complexNumberMultiply(self, num1: str, num2: str) -> str:
        num1_real, num1_img = num1.split('+', 1)
        num1_real = int(num1_real)
        num1_img = int(num1_img.replace('i', ''))

        num2_real, num2_img = num2.split('+', 1)
        num2_real = int(num2_real)
        num2_img = int(num2_img.replace('i', ''))

        temp_real = num1_real * num2_real - num1_img * num2_img
        temp_img = num1_real * num2_img + num2_real * num1_img

        ans = "" +  str(temp_real) + "+" + str(temp_img) + "i"

        return ans

test = Solution()
print(test.complexNumberMultiply("1+-1i", "1+-1i"))

