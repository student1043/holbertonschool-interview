#include <stdlib.h>
#include <stdio.h>
#include "slide_line.h"

/**
 * slide_line - Prints out an array of integer, followed by a new line
 * @line: the input line to process either LEFT or RIGHT
 * @size: Line size to compare to the number 32 if it is smaller then continue
 * @direction: Direction indicating either left or right
 * Return: either 1 or 0
 */
int slide_line(int *line, size_t size, int direction)
{
if (direction != SLIDE_LEFT && direction != SLIDE_RIGHT)
{
return (0);
}
if (!line)
{
return (0);
}
slider(line, size, direction);
calculations(line, size, direction);
slider(line, size, direction);

return (1);
}


/**
 * calculations - Prints out an array of integer, followed by a new line
 * @line: the input line to process either LEFT or RIGHT
 * @size: Line size to compare to the number 32 if it is smaller then continue
 * @direction: Direction indicating either left or right
 * Return: either 1 or 0
 */
void calculations(int *line, size_t size, int direction)
{
size_t i;
if (direction == SLIDE_LEFT)
{
for (i = 0; i < size - 1; i++)
{
if (line[i] == line[i + 1])
{
line[i] = line[i] * 2;
line[i + 1] = 0;
}
}
}
else
{
for (i = size - 1; i > 0; i--)
{
if (line[i] == line[i - 1])
{
line[i] = line[i] * 2;
line[i - 1] = 0;
}
}
}
}


/**
 * slider - Prints out an array of integer, followed by a new line
 * @line: the input line to process either LEFT or RIGHT
 * @size: Line size to compare to the number 32 if it is smaller then continue
 * @direction: Direction indicating either left or right
 * Return: either 1 or 0
 */
void slider(int *line, size_t size, int direction)
{
size_t i, j;
if (direction == SLIDE_LEFT)
{
for (i = 0; i < size - 1; i++)
{
for (j = i + 1; j < size; j++)
{
if (line[i] == 0 && line[j] != 0)
{
line[i] = line[j];
line[j] = 0;
}
}
}
}
else
{
for (i = size - 1; i > 0; i--)
{
for (j = i - 1; j > 0; j--)
{
if (line[i] == 0 && line[j] != 0)
{
line[i] = line[j];
line[j] = 0;
}
}
}
}
}
