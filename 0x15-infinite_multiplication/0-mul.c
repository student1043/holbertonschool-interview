#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: the arguments
 * Return: 0 on success, error code on failure
 */
int main(int argc, char **argv)
{
if (argc != 3)
{
printf("Error\n");
exit(98);
}
else if (!isdigit(*argv[1]) || !isdigit(*argv[2]))
{
printf("Error\n");
exit(98);
}
else
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
}
}
