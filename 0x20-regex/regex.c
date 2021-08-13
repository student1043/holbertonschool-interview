#include "regex.h"


/**
 * regex_match - Entry point
 * @str: string
 * @pattern: pattern to match
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int regex_match(char const *str, char const *pattern)
{
  int wildcard = 0;

  do
  {
    if ((*pattern == *str) || (*pattern == '?'))
    {
      str++;
      pattern++;
    }
    else if (*pattern == '*')
    {
      if (*(++pattern) == '\0')
      {
        return 1;
      }
      wildcard = 1;
    }
    else if (*pattern == '.')
    {
      if (*(++pattern) == '\0')
      {
        return 1;
      }
      wildcard = 1;
    }
    else if (wildcard)
    {
      if (*str == *pattern)
      {
        wildcard = 0;
        str++;
        pattern++;
      }
      else
      {
        str++;
      }
    }
    else
    {
      return 0;
    }
  } while (*str);

  if (*pattern == '\0')
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
