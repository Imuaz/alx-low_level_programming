#!/usr/bin/python3
"""
Defines an island perimeter measuring function.
"""


def island_perimeter(grid):
    """
    Calculates the perimeter of an island based on a grid representing its cells.

    Args:
        grid (List[List[int]]): A two-dimensional grid of 0s and 1s representing the cells of the island.

    Returns:
        int: The perimeter of the island.

    Raises:
        ValueError: If the input grid is empty or not rectangular.
    """
    if not grid or not all(len(row) == len(grid[0]) for row in grid):
        raise ValueError("Input grid must be a non-empty rectangular grid of 0s and 1s.")

    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if j > 0 and grid[i][j - 1] == 1:
                    edges += 1
                if i > 0 and grid[i - 1][j] == 1:
                    edges += 1

    return size * 4 - edges * 2
