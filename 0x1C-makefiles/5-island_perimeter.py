#!/usr/bin/python3
"""
Module 5-island_perimeter
def island_perimeter(grid): that returns the perimeter of the island
"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid."""
    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += check_top(i, j, grid)
                perimeter += check_bottom(i, j, grid, rows)
                perimeter += check_left(i, j, grid)
                perimeter += check_right(i, j, grid, cols)

    return perimeter


def check_top(i, j, grid):
    """Check if the top side of the land cell is exposed."""
    if i == 0 or grid[i - 1][j] == 0:
        return 1
    return 0


def check_bottom(i, j, grid, rows):
    """Check if the bottom side of the land cell is exposed."""
    if i == rows - 1 or grid[i + 1][j] == 0:
        return 1
    return 0


def check_left(i, j, grid):
    """Check if the left side of the land cell is exposed."""
    if j == 0 or grid[i][j - 1] == 0:
        return 1
    return 0


def check_right(i, j, grid, cols):
    """Check if the right side of the land cell is exposed."""
    if j == cols - 1 or grid[i][j + 1] == 0:
        return 1
    return 0
