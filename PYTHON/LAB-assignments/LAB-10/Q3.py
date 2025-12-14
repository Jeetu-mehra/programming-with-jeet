def generate_even_magic_square(n):
    """Generates a doubly-even magic square for N=4, 8, ..."""
    magic_square = [[(i * n) + j + 1 for j in range(n)] for i in range(n)]
    
    # Create mask pattern for swapping
    swap_pattern = [[(row // (n//4) + col // (n//4)) % 2 == 0 for col in range(n)] for row in range(n)]
    
    for row in range(n):
        for col in range(n):
            if not swap_pattern[row][col]:
                magic_square[row][col] = n * n + 1 - magic_square[row][col]
    
    return magic_square

def generate_odd_magic_square(n):
    """Generates an odd-order magic square using the Siamese method."""
    magic_square = [[0] * n for _ in range(n)]
    row, col = 0, n // 2
    
    for num in range(1, n * n + 1):
        magic_square[row][col] = num
        new_row, new_col = (row - 1) % n, (col + 1) % n
        if magic_square[new_row][new_col]:
            row = (row + 1) % n
        else:
            row, col = new_row, new_col
    
    return magic_square

def generate_magic_square(n):
    if n % 2 == 1:
        return generate_odd_magic_square(n)
    elif n % 4 == 0:
        return generate_even_magic_square(n)
    else:
        return "Singly even magic squares (e.g., N=6) require a more complex method."

def print_magic_square(square):
    if isinstance(square, str):
        print(square)
    else:
        for row in square:
            print(" ".join(f"{num:2d}" for num in row))
        print("\n")

sizes = [4, 5, 6, 7, 8]
for n in sizes:
    print(f"Magic Square for N={n}:")
    print_magic_square(generate_magic_square(n))