import random

def is_valid(board, row, col, num, n):
    # 行チェック
    for i in range(n):
        if board[row][i] == num:
            return False

    # 列チェック
    for i in range(n):
        if board[i][col] == num:
            return False

    return True

def solve_sudoku(board, n):
    empty_cell = find_empty(board, n)
    if not empty_cell:
        return True  # 解決
    row, col = empty_cell

    # 1～nをランダムな順序で試す
    nums = list(range(1, n + 1))
    random.shuffle(nums)

    for num in nums:
        if is_valid(board, row, col, num, n):
            board[row][col] = num
            if solve_sudoku(board, n):  # 再帰的に解を試す
                return True
            board[row][col] = 0  # 戻る（バックトラック）

    return False  # 解が見つからない場合

# 空白のセルを見つける
def find_empty(board, n):
    for row in range(n):
        for col in range(n):
            if board[row][col] == 0:
                return (row, col)
    return None

def generate_full_sudoku(n):
    board = [[0 for _ in range(n)] for _ in range(n)]
    solve_sudoku(board, n)
    return board

def print_board(board, n):
    for row in board:
        print(" ".join(str(num) if num != 0 else '.' for num in row))