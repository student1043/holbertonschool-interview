#include "substring.h"

/**
 * find_substring - Entry point
 * @s: string
 * @words: words
 * @nb_words: number of words
 * @n: number
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int *find_substring(char const *s, char const **words, int nb_words, int *n)
{
	int wordLen, j,i, k, *output, *found, len;
	wordLen = strlen(words[0]);
	i = 0;
	len = strlen(s);
	*output = (int *)malloc(len * sizeof(int));
	*n = 0;
	*found = (int *)malloc(nb_words * sizeof(int));

	while (i <= len - nb_words * wordLen)
	{
		for (j = 0; j < nb_words; j++)
		{
			found[j] = 0;
		}
		for (j = 0; j < nb_words; j++)
		{
			for (k = 0; k < nb_words; k++)
			{
				if (found[k] == 0 && strncmp(s + i + j * wordLen, words[k], wordLen) == 0)
				{
					found[k] = 1;
					break;
				}
			}
			if (k == nb_words)
			{
				break;
			}
		}
		if (j == nb_words)
		{
			output[(*n)++] = i;
		}
		i++;
	}
	return (output);
}
