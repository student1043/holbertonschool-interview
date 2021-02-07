#include <stdlib.h>
#include <stdio.h>


/**
 * digitchecker - Entry point
 * @number: number of arguments
 * Return: 0 on success, error code on failure
 */
int digitchecker(char *number)
{
int i;
for (i = 0; number[i]; i++)
{
if (number[i] < '0' || number[i] > '9')
{
return (0);
}
}
return (1);
}


/**
 * converter - Entry point
 * @str: number of arguments
 * Return: 0 on success, error code on failure
 */
int converter(char *str)
{
int res = 0, i;
for (int i = 0; str[i] != '\0'; ++i)
{
if (str[i] > '9' || str[i] < '0')
return (-1);
res = res * 10 + str[i] - '0';
}
return (res);
}


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
else if (digitchecker(argv[1]) == 0 || digitchecker(argv[2]) == 0)
{
printf("Error\n");
exit(98);
}
else
{
printf("%d\n", converter(argv[1]) * converter(argv[2]));
}
}
