#!/usr/bin/python3
"""function def island_perimeter(grid)"""

def island_perimeter(grid):
    """
    Returns perimeter of the Island
    """
    height = len(grid)
    width = len(grid[0])
    size = 0
    side = 0

    for h in range(height):
        for w in range(width):
            if grid[h][w] == 1:
                size += 1
                if (w > 0 and grid[h][w - 1] == 1):
                    side += 1
                if (h > 0 and grid[h - 1][w] == 1):
                    side += 1
    return size * 4 - side * 2
