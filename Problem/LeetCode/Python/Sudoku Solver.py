board = [["5","3",".",".","7",".",".",".","."],
        ["6",".",".","1","9","5",".",".","."],
        [".","9","8",".",".",".",".","6","."],
        ["8",".",".",".","6",".",".",".","3"],
        ["4",".",".","8",".","3",".",".","1"],
        ["7",".",".",".","2",".",".",".","6"],
        [".","6",".",".",".",".","2","8","."],
        [".",".",".","4","1","9",".",".","5"],
        [".",".",".",".","8",".",".","7","9"]]

def print_board():
    N = 9
    for r in range(N):
        for c in range(N):
            print(board[r][c], end=" ")
        print()

def solveSudoku():
    N = 9

    # Use hash set to record the status
    rows = [set() for _ in range(N)]
    cols = [set() for _ in range(N)]
    boxes = [set() for _ in range(N)]

    for r in range(N):
        for c in range(N):
            val = board[r][c]

            if val == ".":
                continue

            rows[r].add(val)
            cols[c].add(val)

            idx = (r // 3) * 3 + c // 3
            boxes[idx].add(val)

    def check(val, r, c):
        if val in rows[r]:
            return False
        if val in cols[c]:
            return False
        
        idx = (r // 3) * 3 + c // 3
        if val in boxes[idx]:
            return False

        return True

    def solution(r, c):
        if r <= 8: 
            val = board[r][c]
            if val != ".":
                if c == 8:
                    solution(r + 1, 0)
                else:
                    solution(r, c + 1)

                if r == 8 and c == 8:
                    return 
                
            else: 
                # print("ok")
                for i in ["1","2","3","4","5","6","7","8","9"]:
                    if check(i, r, c):
                        board[r][c] = i
                        rows[r].add(i)
                        cols[c].add(i)

                        idx = (r // 3) * 3 + c // 3
                        boxes[idx].add(i)

                        if c == 8:
                            solution(r + 1, 0)
                        else:
                            solution(r, c + 1)

                        if r == 8 and c == 8:
                            return 

                        board[r][c] = '.'
                        rows[r].remove(i)
                        cols[c].remove(i)
                        boxes[idx].remove(i)

    solution(0, 0)

solveSudoku()
# board[8][8] = "1"
print_board()
