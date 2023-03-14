#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 *
 * @str: input string
 *
 * Return: NULL
 */

char *_strdup(char *str)
{
  int i = 0, j, k = 0;
  char *newStr = NULL;

  while (str[k] != '\0')
    {
      i++;
      k++;
    }

  newStr = malloc(sizeof(char) * (i + 1));

 i if (str == NULL)
    return (NULL);

  for (j = 0; j <= i; j++)
    newStr[j] = str[j];

  return (newStr);
}
