num1 = '1'
num2 = '9'

res = ""
len_num1 = len(num1)
len_num2 = len(num2)
if len_num1 < len_num2: 
    num1 = '0'*(len_num2-len_num1) + num1
    n = len_num2
else: 
    num2 = '0'*(len_num1-len_num2) + num2
    n = len_num1
# print(num1)
mark = 0
for i in range(n):
    a = int(num1[n - 1- i])
    b = int(num2[n - 1- i])
    
    c = a + b + mark
    if c >= 10: mark = 1
    else: mark = 0
    
    res += str(c % 10)

if mark == 1: res += str(mark)
print(res[::-1])