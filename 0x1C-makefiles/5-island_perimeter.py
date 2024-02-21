#!/usr/bin/python3
"""
Perimeter of an Island
"""


def island_perimeter(grid=[[]]):
    """
    Calculate the perimeter of the island described in the grid

    Args:
        grid (List[List[int]]): A list of lists of integere representing
        the grid
    Returns:
        int: The perimeter of the island.
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    if not grid:
        return perimeter
    if type(grid) is not list:
        return perimeter

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - j][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2
    return perimeter
