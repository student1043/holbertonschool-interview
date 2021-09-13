#include "regex.h"


/**
 * regex_match - Entry point
 * @str: string
 * @pattern: pattern to match
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int regex_match(char const *str, char const *pattern)
{
	if (*str == '\0' && *pattern == '\0')
		return (1);
	if (!*str)
		return (!*pattern || (pattern[1] == '*' && regex_match(str, pattern + 2)));
	if (pattern[1] == '*')
		return ((regex_match(str, pattern + 1)) || (regex_match(str + 1, pattern))
			 ?
				(regex_match(str + 1, pattern) || regex_match(str, pattern + 2))
			 :
				(regex_match(str, pattern + 2)));
	return (regex_match(str + 1, pattern + 1) &&
	((*pattern == '.' || *pattern == *str)));
}
