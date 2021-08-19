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
char *temp, *p = NULL;
int slen = strlen(s), dictlen = 0, count = 0, *pmark;
int regwordlen = strlen(words[0]);
dictlen = regwordlen * nb_words;
temp = calloc((dictlen + 1), sizeof(char));
pmark = calloc((slen + 1), sizeof(int));
for (int i = 0; i <= slen - dictlen;)
{
strncpy(temp, &s[i], dictlen);
for (int j = 0; j < nb_words; j++)
{
for (int k = 0; k < dictlen ;)
{
p = strstr(temp + k, words[j]);
if (p != NULL && ((p - temp) % regwordlen) == 0)
break;
else if (p != NULL)
{
k = p - temp + 1;
p = NULL;
}
else if (p == NULL)
goto nextseg;
}
if (p != NULL)
memset(p, '.', regwordlen);
else
goto nextseg;
}
if (slen != 0 && dictlen != 0)
pmark[count++] = i;
nextseg:
i++;
}
*n = count;
return (pmark);
}
