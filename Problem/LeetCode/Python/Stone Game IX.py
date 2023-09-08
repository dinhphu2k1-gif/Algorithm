class Solution:
    def stoneGameIX(self, stones):
        sum = 0
        n = len(stones)
        stones = sorted(stones)
    
        for i in range(n):
            index = 0
            while index < len(stones): 
                if (sum + stones[index]) % 3 == 0: index += 1
                else : break
            # print(index, stones)
            if index == len(stones):
                if i % 2 == 0: return False
                else : return True
            num = stones[index]
            stones.remove(num)
            sum += num

        if (len(stones) == 0): return False

test = Solution()
stones = [1,1,7,10,8,17,10,20,2,10]
print(test.stoneGameIX(stones))
