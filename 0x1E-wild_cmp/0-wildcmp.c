#include "holberton.h"
#include <stdio.h>

/**
 * wildcmp - check the code for Holberton School students.
 * @s1: char
 * @s2: char
 * Return: Always 0.
 */
int wildcmp(char *s1, char *s2)
{
if (!s2[0])
{
return (!s1[0]);
}
if (*s2 == '*')
{
return (wildcmp(s1, s2 + 1) || (match(s1, s2) && wildcmp(s1 + 1, s2)));
}
if (*s2 == '*')
{
return (s1[0] && wildcmp(s1 + 1, s2 + 1));
}
return (match(s1, s2) && wildcmp(s1 + 1, s2 + 1));
}

/**
 * match - check the code for Holberton School students.
 * @s1: char
 * @s2: char
 * Return: Always 0.
 */
int match(char *s1, char *s2)
{
return ((s1[0] == s2[0]) || (s2[0] == '*' && s1[0]));
}
