#!/usr/bin/python3
"""defines the island perimeter function."""


def island_perimeter(grid):
    """Returns the perimeter of the island.

    The grid represents water by 0 and land zones by 1.

    Args:
        grid (list): A list of list of integers.
    Returns:
        The perimeter of the island described in grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for a in range(height):
        for b in range(width):
            if grid[a][b] == 1:
                size += 1
                if (b > 0 and grid[a][b - 1] == 1):
                    edges += 1
                if (a > 0 and grid[a - 1][b] == 1):
                    edges += 1
    return size * 4 - edges * 2
