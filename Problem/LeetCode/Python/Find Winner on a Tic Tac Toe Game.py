class Solution:
    def tictactoe(self, moves) :
        n = len(moves)

        row = [0 for i in range(3)]
        col = [0 for i in range(3)]
        dia = [0 for i in range(2)]

        for i in range(n):
            x = moves[i][0]
            y = moves[i][1]
            if i % 2 == 0:
                row[x] += 1
                col[y] += 1
                dia[0] += 1 if moves[i] in [[0, 0], [1, 1], [2, 2]] else 0
                dia[1] += 1 if moves[i] in [[2, 0], [1, 1], [0, 2]] else 0

                if row[x] == 3 or col[y] == 3 or dia[0] == 3 or dia[1] == 3:
                    return "A"
            else :
                row[x] += -1
                col[y] += -1
                dia[0] += -1 if moves[i] in [[0, 0], [1, 1], [2, 2]] else 0
                dia[1] += -1 if moves[i] in [[2, 0], [1, 1], [0, 2]] else 0

                if row[x] == -3 or col[y] == -3 or dia[0] == -3 or dia[1] == -3:
                    return "B"
        
        if n == 9: return "Draw"
        else : return "Pending"

test = Solution()
moves = [[0,0],[1,1]]
print(test.tictactoe(moves))