#include "menger.h"

/**
 * spacehash_checker - checking if the we should print space or hash
 * @l: index of row
 * @k: index of column
 * Return: 1 or 0
 */
int spacehash_checker(int l, int k)
{
while (l && k)
{
if (l % 3 == 1 && k % 3 == 1)
{
return (1);
}
l = l / 3;
k = k / 3;
}
return (0);
}

/**
 * menger - printing the menger sponge
 * @level: the level of the menger sponge
 * Return: :)
 */
void menger(int level)
{
int l, k;
int mengsize = pow(3, level);

for (l = 0; l < mengsize; l++)
{
for (k = 0; k < mengsize; k++)
{
if (spacehash_checker(l, k))
{
printf(" ");
}
else
{
printf("#");
}
}
printf("\n");
}
}
