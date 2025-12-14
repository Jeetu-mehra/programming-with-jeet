N = 8

def print_solution(board):
    for row in board:
        print(" ".join("Q" if cell else "." for cell in row))
    print("\n")

def is_safe(board, row, col):
    # Check column
    for i in range(row):
        if board[i][col]:
            return False
    
    # Check upper left diagonal
    for i, j in zip(range(row, -1, -1), range(col, -1, -1)):
        if board[i][j]:
            return False
    
    # Check upper right diagonal
    for i, j in zip(range(row, -1, -1), range(col, N)):
        if board[i][j]:
            return False
    
    return True

def solve_n_queens(board, row):
    if row >= N:
        print_solution(board)
        return True
    
    res = False
    for col in range(N):
        if is_safe(board, row, col):
            board[row][col] = True
            res = solve_n_queens(board, row + 1) or res
            board[row][col] = False  # Backtrack
    
    return res

def solve():
    board = [[False] * N for _ in range(N)]
    if not solve_n_queens(board, 0):
        print("No solution exists")

solve()