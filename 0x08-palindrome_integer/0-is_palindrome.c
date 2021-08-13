#include <stdlib.h>
#include <stdio.h>

#include "palindrome.h"

/**
 * is_palindrome - Entry point
 * @n: Arguments counter
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int is_palindrome(unsigned long n)
{
unsigned long rev = 0, num = n;
while (n != 0)
{
rev = rev * 10;
rev = rev + n % 10;
n = n / 10;
}
if(rev == num)
{
return(1);
}
return(0);
}
