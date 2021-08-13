#include <stdio.h>
#include <stdlib.h>
#include "sandpiles.h"

/**
 * print_grid - prints the grid as in the example
 * @grid: the grid
 * Return: nothing
 */
void print_grid(int grid[3][3])
{
int i, j;

printf("=\n");
for (i = 0; i < 3; i++)
{
for (j = 0; j < 3; j++)
{
if (j)
printf(" ");
printf("%d", grid[i][j]);
}
printf("\n");
}
}

/**
 * toppling - topples the grid till it gets to < 3
 * @grid1: the grid
 * Return: nothing
 */
void toppling(int grid1[3][3])
{
int grid[3][3], i, j;
for (i = 0; i < 3; i++)
{
for (j = 0; j < 3; j++)
{
grid[i][j] = grid1[i][j];
}
}
for (i = 0; i < 3; i++)
{
for (j = 0; j < 3; j++)
{
if (grid[i][j] > 3)
{
grid1[i][j] = grid1[i][j] - 4;
if (i + 1 < 3)
{
grid1[i + 1][j] += 1;
}
if (j + 1 < 3)
{
grid1[i][j + 1] += 1;
}
if (i - 1 >= 0)
{
grid1[i - 1][j] += 1;
}
if (j - 1 >= 0)
{
grid1[i][j - 1] += 1;
}
}
}
}
}

/**
 * calmsand - check if the grid is stable
 * @grid1: the grid
 * Return: 1 or 0
 */
int calmsand(int grid1[3][3])
{
int i, j;
for (i = 0; i < 3; i++)
{
for (j = 0; j < 3; j++)
{
if (grid1[i][j] > 3)
{
return (0);
}
}
}
return (1);
}

/**
 * sandpiles_sum - adds the two grids
 * @grid1: grid 1
 * @grid2: grid 2
 */

void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
int i, j;
for (i = 0; i < 3; i++)
{
for (j = 0; j < 3; j++)
{
grid1[i][j] = grid1[i][j] + grid2[i][j];
}
}
while (calmsand(grid1) == 0)
{
print_grid(grid1);
toppling(grid1);
}
}
